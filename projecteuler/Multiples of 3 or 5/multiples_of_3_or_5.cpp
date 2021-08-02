#include <bits/stdc++.h>


int main(){

    int n = 999;
    
    int sum = 0;
    while(n > 1){
        if(n % 3 == 0 || n % 5 == 0){
            sum += n;
        }

        n--;
    }

    std::cout << sum << std::endl;
    return 0;
}
