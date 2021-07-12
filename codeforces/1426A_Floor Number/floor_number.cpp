#include <iostream>
#include "math.h"


int main(){
    int t, n, x;
    
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n >> x;
        

        if(n == 1 || n == 2){
            std::cout << "1" << std::endl;
        }
        else{
            int cnt = ceil((n-2)/(float)x)+1;    
            std::cout << cnt << std::endl;
        }

    }
    return 0;
}
