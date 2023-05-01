/*
WAP that can throw multiple type of errors 
and received by a single catchblock.
*/
#include <iostream>
using namespace std;
int main()
{
    int a, q;
    cout << "Enter a,q : ";
    cin >> a >> q;
    try{
        if (a == 0 && q == 0)
            throw 'x';
        if (q == 0)
            throw 0;
        cout << "division results : " <<float(a) / q;
    }
    catch(...)
    {
        cout<<"operation cant be performed";
    }
    return 0;
}
/*
Enter a,q : 4 0
operation cant be performed

Enter a,q : 2 4
division results : 0.5
*/