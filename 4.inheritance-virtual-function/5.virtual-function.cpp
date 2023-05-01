//demonstrate virtual function
#include<iostream>
using namespace std;

class A{
    public:
    virtual void display(){
        cout<<"this is class A"<<endl;
    }
};
class B: public A{
    public:
    void display(){
        cout<<"this is class B"<<endl;
    }
};
int main(){
    A *p = new A();
    B b;
    p->display();
    p = &b;
    p->display();
    return 0;
}
/*
this is class A
this is class B
*/


