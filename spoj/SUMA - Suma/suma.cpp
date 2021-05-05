#include <iostream>



int main(){

    int a, suma = 0;
    while(std::cin >> a){
        suma += a;
        std::cout << suma << std::endl;
    }

    return 0;
}