#include <iostream>

int main(){
    int t, n;
     
    std::cin >> t;
    for(int i = 0; i < t; i++){

        std::cin >> n;
        int b = 0;

        if(n != 2){

            b = (n/2);

            if(n % 2 == 0){
                b -= 1;
            }
        }

        std::cout << b << std::endl;

    }

    return 0;
}
