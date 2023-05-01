#include<iostream>
inline double area (float r){
    return 3.14159*r*r ;
}
int main(){
    int radius;
    std::cout<<"enter radius: ";
    std::cin>>radius;
    std::cout<<"area : "<<area(radius);
    return 0;
}

/*
enter radius: 2
area : 12.5664
*/