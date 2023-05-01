/*
WAP in C++ which reads two integers and two fractional numbers from
user and calculate quotient for each pair dividing first number by second
using single function(function template)
*/
#include <iostream>
using namespace std;
template<class T>
void divide(T a, T b){
    cout << "Quotient = " << (double)a / b << endl;
}

int main()
{
    int x, y;
    double p, q;

    cout << "Enter two integers: ";
    cin >> x >>y;
    cout << "Enter two fractional numbers: ";
    cin >> p >> q;

    divide(x, y);
    divide(p, q);

    return 0;
}

/*
Enter two integers: 4 5
Enter two fractional numbers: 6.1 2.8
Quotient = 0.8
Quotient = 2.17857
*/