/*
Create a class named Person with appropriate data members.
Store the contents to file named "data.txt"
*/
#include <iostream>
#include <fstream>
using namespace std;
class Person
{
    char name[20];
    int age;
public:
    void set_data(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Age: ";
        cin>>age;
    }
};

int main()
{
    Person person;
    person.set_data();
    fstream myFile;
    myFile.open("data.txt",ios::out | ios::binary);
    myFile.write((char*) &person,sizeof(person));
    myFile.close();
    return 0;
}
/*
Name: Ramesh
Age: 20
*/