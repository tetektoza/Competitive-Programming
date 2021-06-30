#include <iostream>
#include "math.h"

int main(){
    
    int t, n;
    std::cin >> t;

    for(int i = 0; i < t; i++){

        int sum_first = 0, sum_second = 0;
        std::cin >> n;
        
        if(n > 2){        
            for(int i = 1; i <= n/2; i++){
                if(i == n/2){
                    sum_first += pow(2,n);
                    break;
                }

                sum_first += pow(2, i);

            }
            
            for(int i = (n/2); i <= n-1; i++){
                sum_second += pow(2, i);

            }

        }
        else{
            sum_first = 2;
        }
        
        

        std::cout << abs(sum_first - sum_second) << std::endl; 


    }



    return 0;
}
