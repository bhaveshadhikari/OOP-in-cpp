/*
WAP to create a class name Student with private data name,class and roll
number. Using appropriate function take data of two student and display
them.
*/
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    string std;
    int roll;

public:
    void set_data(){
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter class: ";
        cin>>std;
        cout<<"enter roll no: ";
        cin>>roll;
    }
    void show_data();
}; 
void Student::show_data(){
        cout<<"-----------------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Class: "<<std<<endl;
        cout<<"Roll no: "<<roll<<endl;
    }

int main(){
    Student s1,s2;
    s1.set_data();
    s2.set_data();
    s1.show_data();
    s2.show_data();
    return 0;
}

/*
enter name: Shri
enter class: 8A
enter roll no: 12
enter name: Shyam
enter class: 8B
enter roll no: 7
-----------------
Name: Shri
Class: 8A
Roll no: 12
-----------------
Name: Shyam
Class: 8B
Roll no: 7
*/