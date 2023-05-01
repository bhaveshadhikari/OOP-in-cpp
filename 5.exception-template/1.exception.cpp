//dealing with multiple exceptions, illustrate exception handling

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
    catch (int){
        cout << "couldn't divide by zero!";
    }
    catch (char){
        cout << "0/0 is indeterminate!";
    }
    return 0;
}

/*
Enter a,q : 3 0
couldn't divide by zero!

Enter a,q : 0 0
0/0 is indeterminate!

Enter a,q : 3 4
division results : 0.75

*/