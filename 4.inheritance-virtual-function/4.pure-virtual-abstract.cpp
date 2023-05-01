
#include<iostream>
using namespace std;
  
class Base{
public:
    virtual void show() = 0;
};
  
class Derived: public Base{
public:
    void show() { cout << "Derived Class!"; }
};
  
int main(void){
    Base *bp = new Derived();
    bp->show();
    return 0;
}

//Derived Class!