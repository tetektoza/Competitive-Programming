#include <iostream>


int main(){
    int t, n, m;

    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n >> m;
        
        int result;
        if(n % 2 == 0 || m % 2 == 0){

            if(n % 2 == 0){
                result = n/2;
                result *= m;
            }
            else{
                result = m/2;
                result *= n;
            }
        }
        else{
            if(n >= m){
                result = n*((m-1)/2) + (n-1)/2+1;
            }
            else{
                result = m*((n-1)/2) + (m-1)/2+1;
            }
        }


        std::cout << result << std::endl;
    }



    return 0;
}
