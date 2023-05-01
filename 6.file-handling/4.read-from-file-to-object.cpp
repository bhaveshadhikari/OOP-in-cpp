/*
Create a class named Person with appropriate data members.
Store the contents to file named "data.txt"
*/
#include <iostream>
#include <fstream>
using namespace std;

class Person{
    char name[20];
    int age;
public:
    void display_data(){
        cout<<name<<" is " <<age<<" years old";
    }
};

int main(){
    Person person;
    fstream myFile;
    myFile.open("data.txt", ios::in | ios::binary);
    myFile.read((char*) &person, sizeof(person));
    person.display_data();
    myFile.close();
    return 0;
}
/*
Ramesh is 20 years old
*/