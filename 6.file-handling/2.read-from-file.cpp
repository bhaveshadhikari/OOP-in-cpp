#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream fp;
    fp.open("Myfile.txt",ios::in);
    string ch;
    while(getline(fp,ch)){
        cout<<ch<<endl;
    }
    return 0;
}

/*
File Handling in C++ is easy!
Bye Bye!
*/