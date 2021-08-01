#include <bits/stdc++.h>


int main(){
    
    int t;

    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;

        if(n == 1 || n == 2 || n == 3){
            std::cout << n-1 << std::endl;
        }
        else if(n % 2 == 0){
            std::cout << 2 << std::endl;
        }
        else{
            std::cout << 3 << std::endl;
        }
    }




    return 0;
}
