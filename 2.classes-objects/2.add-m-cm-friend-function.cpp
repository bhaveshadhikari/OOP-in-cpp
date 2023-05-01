/*
Define a class named Distance with meter and cm as private data members
and appropriate function members. Use this class to read two objects of the
Distance class and add them by passing these two objects to a function
and finally display result object in main () function.
*/
#include <iostream>
using namespace std;
class Distance
{
    int meter;
    int cm;

public:
    void set_data(){
        cout << "enter meter, cm : ";
        cin >> meter >> cm;
    }

    friend Distance add(Distance, Distance);

    void display(){
        cout<<"------------"<<endl;
        cout<<meter<<"m , "<<cm<<" cm ";
    }
};
Distance add(Distance d1, Distance d2)
{
    Distance result;
    result.cm = d1.cm + d2.cm;
    result.meter = result.cm / 100 + d1.meter + d2.meter;
    result.cm %= 100;
    return result;
}

int main(){
    Distance d1,d2,result;
    d1.set_data();
    d2.set_data();
    result = add(d1,d2);
    result.display();
    return 0;
}
/*
enter meter, cm : 2 60
enter meter, cm : 3 70
------------
6m , 30 cm
*/