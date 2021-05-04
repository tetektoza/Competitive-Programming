#include <iostream>
//#include <string>


int main(){

    int suma = 0;
    for(int i = 0; i < 4; i++){
        int a, b;
        std::cin >> a >> b;
        suma += (a - b);
    }

    std::cout << suma << std::endl;

    return 0;
}