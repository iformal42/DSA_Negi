#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class singlyList
{
public:
    
    Node *head,*tail;

    singlyList(int x)
    {
       head = new Node(x);
       tail = head;
    }

    void insert(int data){
        Node *node = new Node(data);
        if(head == nullptr){
            head =  node;
            tail = head;
        }
        else {
            tail->next = node;
            tail = node;
        }
    }
    
    // insert at any position
    void insert(int data,int pos){
        if(pos <= 0) throw std::invalid_argument("Position cannot be negative and zero");
       
        if(head == nullptr)
        {
            this->insert(data);
            return;
        }
        if(pos == 1)
        {
            Node *node = new Node(data);
            node->next = head;
            head = node;
        }
        else {
            Node*temp = head;
            --pos;
            while (pos != 1 && temp )
            {
               temp = temp->next;
               --pos;
            }
            if(!temp) return;
            if(!temp->next)
            this->insert(data);

            else{
                Node *node = new Node(data);
                node->next = temp->next;
                temp->next = node;
            }
        }

    }
    
    void display()
    {
        Node *temp = head;
        while(temp)
        {
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }

     ~singlyList() {
        Node *curr = head;
        while (curr) {
            Node *next = curr->next;
            delete curr;
            curr = next;
        }
    }

    void deleteAtEnd(){
        if(!head) return;
        if(head == tail){
            delete head;
            tail = head = nullptr;
            return;
        }

        Node *curr = head;
        Node *prev = head;
        while(curr->next){
            prev = curr;
            curr = curr->next;
        }
        prev->next = nullptr;
        tail = prev;
        delete curr;
    }
    void deleteAtAnyPos(int pos){
            if(pos <= 0) throw std::invalid_argument("Position cannot be negative and zero");
            if(!head) return;

            if(pos == 1)
            {
                Node *newHead = head->next;
                if(tail == head) tail = newHead;
                delete head;
                head = newHead;
            }
            else{
                Node *curr = head;
                Node *prev = head;
                // pos--;
                while (pos!=1 && curr)
                {
                    prev = curr;
                    curr = curr->next;
                    pos--;
                }
                if(!curr) return ;
                prev->next = curr->next;
                if(!curr->next){
                    tail = prev;
                }

                delete curr;

            }


    }
};

int main()
{
    singlyList *A1 = new singlyList(5);
    A1->insert(1);
    A1->insert(3);
    A1->insert(4);
    A1->insert(6,5);
    A1->deleteAtAnyPos(2);
    A1->display();
    delete A1;
    
    return 0;
}