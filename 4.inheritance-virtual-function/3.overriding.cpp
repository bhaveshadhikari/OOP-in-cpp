#include <iostream>
using namespace std;
class A
{
public:
    void show(){
        cout<<"this is A"<<endl;
    }
};

class B : public A
{
public:
   void show(){
    cout<<"this is B"<<endl;
   }
};

int main(){
    B b;
    b.show();
    return 0;
}

//this is B