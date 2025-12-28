#include<iostream>
using namespace std;
class Queue{
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
};

int main()
{
    
    return 0;
}