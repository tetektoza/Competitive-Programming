#include <iostream>



int main(){

    int m, n;
    std::cin >> m >> n;
    
    int result = 0;
    if(m % 2 == 0 || n % 2 == 0){
        if(m % 2 == 0){
            result = m/2;
            result *= n;
        }
        else{
            result = n/2;
            result *= m;
        }

    }
    else if(n == 1 || m == 1){
        if(n == 1){
            result = m/2;
        }
        else{
            result = n/2;
        }   
    }
    else{
        if(n > m){
            result = n*((m-1)/2) + (n-1)/2;
        }
        else{
            result = m*((n-1)/2) + (m-1)/2;
        }
    }

    std::cout << result << std::endl;

    return 0;
}
