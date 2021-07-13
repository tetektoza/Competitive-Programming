#include <iostream>


int main(){

    int t, x;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> x;
        
        int a, b;
        if(x % 2 == 0){
            a = x/2;
            b = a;
        }
        else{
            a = x-1;
            b = 1;
        }

        std::cout << a << " " << b << std::endl;

    }


    return 0;
}
