#include <iostream>
using namespace std;
class Node
{
public:
    Node *prev;
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class doublyList
{
private:
    void makeHead(int data)
    {
        this->head = new Node(data);
        this->tail = head;
    }

public:
    Node *head, *tail;
    doublyList(int data)
    {
        this->makeHead(data);
    }

    void insert(int data)
    {
        if (head == nullptr)
        {
            this->makeHead(data);
            return;
        }
        Node *node = new Node(data);
        tail->next = node;
        node->prev = tail;
        tail = node;
    }
    void insert(int data, int pos)
    {
        if (pos <= 0)
            return;
        if (pos == 1)
        {
            if (head == nullptr)
            {
                makeHead(data);
                return;
            }
            Node *node = new Node(data);
            node->next = head;
            head->prev = node;
            head = node;
            return;
        }

        Node *curr = head;
        pos--;
        while (pos != 1 && curr)
        {
            curr = curr->next;
            pos--;
        }
        if (!curr)
            return;
        else if (!curr->next)
        {
            insert(data);
            return;
        }
        Node *node = new Node(data);
        node->prev = curr;
        node->next = curr->next;
        curr->next = node;
        node->next->prev = node;
    }

    void pop()
    {
        if (!head)
            return;
        if (!tail->prev)
        {
            delete head;
            tail = head = nullptr;
        }
        else
        {
            tail = tail->prev;
            delete tail->next;
            tail->next = nullptr;
        }
    }

    void pop(int pos)
    {
        if (pos < 1)
            return;
        if (pos == 1)
        {
            if (!head)
                return;
            if (!head->next)
                pop();
            else
            {
                head = head->next;
                delete head->prev;
                head->prev = nullptr;
            }
            return;
        }
       
        Node *temp = head;
        while(pos != 1 && temp)
        {
            temp = temp->next;
            pos--;
        }
        if(!temp) return;
        if(!temp->next){
            pop();
            return;
        }
        // Node *nodeToDelete = temp->next;
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        delete temp; 
    }

    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    void displayReverse()
    {
        Node *temp = tail;
        while (temp)
        {
            cout << temp->data << endl;
            temp = temp->prev;
        }
    }
    ~doublyList(){
        Node *temp = head;
        Node *cur;
        while (temp)
        {
            cur = temp->next;
            delete temp;
            temp = cur;
        }
        delete temp;
    }

};

int main()
{
    doublyList *a = new doublyList(1);
    a->insert(2);
    a->insert(3);
    a->insert(4);
    // a->insert(0, 1);
    // a->insert(8, 2);
    // a->insert(5, 7);
    // a->insert(7);
    a->pop(4);
    a->insert(7);
    a->displayReverse();

    delete a;
    return 0;
}