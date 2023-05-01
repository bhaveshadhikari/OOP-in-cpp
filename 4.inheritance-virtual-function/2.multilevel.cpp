// to demonstrate constructor in multilevel inheritance
#include <iostream>
using namespace std;
class A
{
public:
    A() { cout << "A created!" << endl; }
    ~A() { cout << "A destroyed!" << endl; }
};

class B : public A
{
public:
    B() { cout << "B created!" << endl; }
    ~B() { cout << "B destroyed!" << endl; }
};

class C : public B
{
public:
    C() { cout << "C created!" << endl; }
    ~C() { cout << "C destroyed!" << endl; }
};

int main(){
    C c;
    return 0;
}

/*
A created!
B created!
C created!
C destroyed!
B destroyed!
A destroyed!
*/