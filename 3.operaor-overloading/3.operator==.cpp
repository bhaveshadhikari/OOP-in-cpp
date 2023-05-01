/*
Create a class named rectangle with data members length and breadth.
Overload == operator to check if rectangle represented bytwo objects are identical
*/

#include <iostream>
using namespace std;
class rectangle
{
    int len;
    int bre;

public:
    rectangle() {}
    rectangle(int l, int b) : len(l), bre(b) {}
    bool operator==(const rectangle &r)
    {
        if (len == r.len && bre == r.bre)
            return true;
        return false;
    }
};
int main()
{
    rectangle r1(2, 3), r2(2, 3);
    if (r1 == r2)
        cout << "identical!";
    else
        cout << "not-identical!";
    return 0;
}
//identical!