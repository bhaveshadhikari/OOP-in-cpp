/*
WAP to use class template with multiple parameters.
*/
#include<iostream>
using namespace std;
template <class T>
class number{
    private:
    T x;
    T y;
    public:
    number (T a, T b):x(a),y(b){}
    void display(){
        cout<<"sum of " <<x <<" and "<<y<<" : "<<x+y<<endl;
    }
};
int main()
{
    number <int> intgr(2,3);
    number <float> flt(3.2,2.3);
    intgr.display();
    flt.display();
return 0;
}
/*
sum of 2 and 3 : 5
sum of 3.2 and 2.3 : 5.5
*/