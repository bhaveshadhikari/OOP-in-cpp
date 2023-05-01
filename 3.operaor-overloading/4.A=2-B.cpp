#include<iostream>
using namespace std;
class number{
    int value;
    public:
    number(){}
    number(int x):value(x){}
    friend number operator-(int c, const number&b){
        return (c - b.value);
    }
    int get_value(){ return value;}
};
int main(){
    number A,B(12);
    A = 2 - B;
    cout<<"A = "<<A.get_value();
    return 0;
}
//A = -10