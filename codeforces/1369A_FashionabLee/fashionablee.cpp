#include <iostream>


int main(){

    int t, n;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n;

        if(n % 4 == 0){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }

    }



    return 0;
}
