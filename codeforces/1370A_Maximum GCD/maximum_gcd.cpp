#include <iostream>


int main(){

    int t, n;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n;
        
        int gcd;
        if(n % 2 == 0){
            gcd = n/2;
        }
        else if(n >= 5){
            gcd = (n-1)/2;
        }
        else{
            gcd = 1;
        }



        std::cout << gcd << std::endl;

    }



    return 0;
}
