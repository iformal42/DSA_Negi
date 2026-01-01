#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

class Queue
{
public:
    Node *front, *rear;
    int size;
    Queue()
    {
        front = rear = nullptr;
        size = 0;
    }

    ~Queue()
    {
        while (!empty())
        {
            /* code */
            pop();
        }
    }
    void push(int x)
    {
        Node *temp = new Node(x);

        if (empty())
            front = rear = temp;
        else
        {

            rear->next = temp;
            rear = temp;
        }
        size++;
    }
    void pop()
    {
        if (empty())
        {
            cout << "Queue is empty." << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        if (!front)
            rear = nullptr;
        size--;
        delete temp;
    }
    bool empty()
    {
        return size == 0;
    }

    int len()
    {
        return size;
    }
    int start()
    {
        if (empty())
        {
            cout << "Queue is empty." << endl;
            return 0;
        }
        return front->data;
    }

    int end()
    {
        if (empty())
        {
            cout << "Queue is empty." << endl;
            return 0;
        }
        return rear->data;
    }
};
int main()
{
    Queue q;

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