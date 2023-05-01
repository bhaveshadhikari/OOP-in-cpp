/*
Define a class named Distance with m and cm as private data members and
appropriate function members. Overload binary ‘+’ operator to use for
addition of two object of the class.
*/

#include <iostream>
using namespace std;
class Distance{
    int meter;
    int cm;
public:
    Distance(){}
    void set_data(){
        cout << "enter meter, cm : ";
        cin >> meter >> cm;
    } 
    void display(){
        cout << "------------" << endl;
        cout << meter << "m , " << cm << " cm ";
    }
    Distance operator+(const Distance &d2){
        Distance result;
        result.cm = cm + d2.cm;
        result.meter = result.cm / 100 + meter + d2.meter;
        result.cm %= 100;
        return result;
    }
};

int main(){
    Distance d1, d2, sum;
    d1.set_data();
    d2.set_data();
    sum = d1+d2;
    sum.display();
    return 0;
}

/*
enter meter, cm : 2 60
enter meter, cm : 3 70
------------
6m , 30 cm
*/