#include <iostream>
using namespace std;
class number{
    int value;
public:
    number() : value(0) {}
    number(int x) : value(x) {}
    number(const number &n) : value(n.value) {}
    ~number() {}
    void display() { cout << "value : " << value << endl; }
};
int main(){
    number n1, n2(2), n3(n2);
    n1.display();
    n2.display();
    n3.display();
    return 0;
}
/*
value : 0
value : 2
value : 2
*/