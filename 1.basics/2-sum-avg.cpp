#include<iostream>
int main(){
    int a,b,c;
    std::cout<<"enter three numbers: ";
    std::cin>>a>>b>>c;
    std::cout<<"sum : "<<(a+b+c)<<char(10);
    std::cout<<"average : "<<float(a+b+c)/3;
    return 0;
}
/*
enter three numbers: 2 5 7
sum : 14
average : 4.66667
*/