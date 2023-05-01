/*
     1
    1 1
   1 1 1
  1 1 1 1
 1 1 1 1 1
*/
#include <iostream>
int main(){
    for (int i = 1; i <= 5; i++){
        for (int j = i; j <= 5; j++)
            std::cout << " ";

        for (int k = 1; k <= i; k++)
            std::cout << 1 << " ";

        std::cout << char(10);
    }
    return 0;
}