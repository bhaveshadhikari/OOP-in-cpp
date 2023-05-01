#include<iostream>
int add(int a, int b){
    return a+b;
}
double add(double a, double b){
    return a+b;
}
int main(){
    std::cout<<"2 + 5 : "<<add(2,5)<<char(10);
    std::cout<<"2.3 + 5.2 : "<<add(2.3,5.2);
    return 0;
}
/*
2 + 5 : 7
2.3 + 5.2 : 7.5
*/