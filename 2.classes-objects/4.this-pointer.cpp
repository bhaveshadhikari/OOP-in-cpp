//illustrate the use of this pointer to resolve name conflict
#include <iostream>
using namespace std;
class demo
{
    int x = 5;
public:
    demo()
    {
        int x = 2;
        x = x;       // member variable x doesnt update
        this->x = x; // member variable x updates
    }
    ~demo() { cout << "x = " << x; }
};
int main(){
    demo d;
    return 0;
}