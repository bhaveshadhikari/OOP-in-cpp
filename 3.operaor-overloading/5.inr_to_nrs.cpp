/*
WAP to convert Indian currency to Nepalese currency. Define two class
named Indian_currency and Nepalese_currency with data members Rs and
Paisa for each class. Use 1NRs=1.6 for conversion
*/

#include<iostream>
using namespace std;

class indian{
int rs;
public:
indian(int x):rs(x){}
int get_currency(){
    return rs;
}
};

class nepal{
double rs;
public:
nepal(indian &n){
    this->rs= 1.6 * n.get_currency();
}
~nepal(){cout<<"inr : "<<rs;}
};

int main(){
    indian inr(30);
    nepal nrs = inr ;
    return 0;
}
//60
