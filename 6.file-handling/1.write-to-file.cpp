/*
WAP to write text “File Handling in C++ is easy” in a file named
Myfile.txt.
*/

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream fp;
    fp.open("Myfile.txt", ios::out);
    fp<<"File Handling in C++ is easy!"<<endl;
    fp<<"Bye Bye!";
    fp.close();
return 0;
}

/*
MyFile.txt
--------------
File Handling in C++ is easy!
Bye Bye!
*/