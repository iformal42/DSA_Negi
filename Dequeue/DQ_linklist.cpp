#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev, *next;
    Node(int x)
    {
        data = x;
        prev = next = nullptr;
    }
};

class DQ
{
public:
    int size;
    Node *front, *rear;

    DQ()
    {
        size = 0;
        front = rear = nullptr;
    }
    ~DQ()
    {
        while (!empty())
        {
            /* code */
            pop_back();
        }
    }

    void push_back(int x)
    {
        Node *temp = new Node(x);
        size++;
        if (empty())
        {
            front = rear = temp;
            return;
        }
        temp->prev = rear;
        rear->next = temp;
        rear = temp;
    }

    void push_front(int x)
    {
        Node *temp = new Node(x);
        size++;

        if (empty())
        {
            front = rear = temp;
            return;
        }
        temp->next = front;
        front->prev = temp;
        front = temp;
    }

    void pop_back()
    {
        if (empty())
        {
            cout << "Queue is empty." << endl;
            return;
        }

        Node *temp;
        temp = rear;
        rear = temp->prev;
        if (rear)
            rear->next = nullptr;
        else
            front = nullptr;

        size--;
        delete temp;
    }
    void pop_front()
    {
        if (empty())
        {
            cout << "Queue is empty." << endl;
            return;
        }

        Node *temp;
        temp = front;
        front = temp->next;
        if (front)
            front->prev = nullptr;
        else
            rear = nullptr;

        size--;
        delete temp;
    }
    bool empty()
    {
        return size == 0;
    }
    int lenght()
    {
        return size;
    }
};
int main()
{
    return 0;
}
