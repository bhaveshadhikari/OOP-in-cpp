#include <iostream>
using namespace std;
class number{
    int a;
    int b;
public:
    number(int a, int b) : a(a), b(b) {}
    void display(){
        cout << "a = " << a << ", b = " << b << endl;
    }

    void operator++(){
        a++;
        b++;
    }
};
int main(){
    number n(2, 3);
    n.display();
    ++n;
    n.display();
    return 0;
}

/*
a = 2, b = 3
a = 3, b = 4
*/