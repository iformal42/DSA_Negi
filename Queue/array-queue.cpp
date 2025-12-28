#include<iostream>
using namespace std;
class Queue{
  public:
    int *q;
    int front,rear;
    int size;

  Queue(int n)
  {
    q = new int[n];
    front = rear = -1;
    size = 0;

  }
  bool empty()
  {
    return size == 0;
  }
  int size()
  {
    return size;
  }
};

int main()
{
    
    return 0;
}