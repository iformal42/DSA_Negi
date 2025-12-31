#include <iostream>
using namespace std;
class Queue
{
public:
  int *q;
  int front, rear;
  int lenght, size;

  Queue(int n)
  {
    q = new int[n];
    front = rear = 0;
    size = 0;
    lenght = n;
  }
  ~Queue()
  {
    delete[] q;
  }
  void push(int x)
  {
    if (this->full())
    {
      cout << "Queue is full" << endl;
      return;
    }

    q[rear] = x;
    rear = (rear + 1) % lenght;

    size++;
    cout << x << " is push to Queue" << endl;
  }
  void pop()
  {
    if (empty())
    {
      cout << "Queue is empty" << endl;
      return;
    }
    cout << q[front] << " is pop fromt Queue" << endl;
    front = (front + 1) % lenght;

    size--;
  }
  bool empty()
  {
    return size == 0;
  }

  bool full()
  {
    return lenght == size;
  }
  int len()
  {
    return size;
  }
  int start()
  {
    if (empty())
    {

      cout << "Queue is empty" << endl;
      return -1;
    }
    return q[front];
  }

  int end()
  {
    if (empty())
    {

      cout << "Queue is empty" << endl;
      return -1;
    }
    return q[(rear - 1 + lenght) % lenght];
  }
};
int main()
{
  Queue q(4);

  q.push(5);
  q.push(2);
  q.push(1);
  cout << q.start() << endl;
  cout << q.end() << endl;
  q.pop();
  q.pop();
  q.pop();
  q.pop();

  return 0;
}