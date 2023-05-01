#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter # of elements: ";
    cin >> n;
    int *a = new int(n);
    cout << "enter elements : ";
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum+=a[i];
    }
    cout<<"sum : "<<sum<<char(10);
    cout<<"average : "<<float(sum)/n;
    delete[] a;
    return 0;
}

/*
enter # of elements: 6
enter elements : 1 3 4 6 7 8
sum : 29
average : 4.83333
*/