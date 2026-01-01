#include <iostream>
using namespace std;

class DQ
{
public:
    int size, front, rear, n;
    int *dq;
    DQ(int x)
    {
        n = x;
        dq = new int[n];
        size = 0;
        front = rear = 0;
    }
    ~DQ()
    {
        delete[] dq;
    }

    void push_back(int x)
    {
        if (full())
        {
            cout << "Queue is full" << endl;
            return;
        }
        if (empty())
        {
            rear = front = 0;
        }
        dq[rear] = x;
        rear = (rear + 1) % n;
        size++;
    }

    void push_front(int x)
    {
        if (full())
        {
            cout << "Queue is full" << endl;
            return;
        }
        if (empty())
        {
            rear = front = 0;
        }
        front = (front - 1 + n) % n;
        dq[front] = x;
        size++;
    }

    void pop_back()
    {
        if (empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        rear = (rear - 1 + n) % n;
        size--;
    }
    void pop_front()
    {
        if (empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        front = (front + 1) % n;
        size--;
    }
    bool empty()
    {
        return size == 0;
    }
    bool full()
    {
        return size == n;
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
