
#include<iostream>

using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout<<"shout";
    }
};


class cat:public Animal{

    public:
    
    void speak() {
         cout<<"meow";
    }
};
int main(){
Animal* c = new cat();

c->speak();
return 0;
}

