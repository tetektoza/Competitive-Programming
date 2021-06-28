#include <iostream>


int main(){
    
    int t, a, b, tmp;
    
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> a >> b;

        if(a >= b){ 
            tmp = (2*b > a) ? 2*b : a;
            tmp *= tmp;
        }
        else if(a < b){
            tmp = (2*a > b) ? 2*a : b;
            tmp *= tmp;
        }
        
        std::cout << tmp << std::endl;


    }


    

    return 0;
}
