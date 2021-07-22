#include <bits/stdc++.h>



int main(){

    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;

        if(n < 31){
            std::cout << "NO" << std::endl;
        }
        else if(n==36 || n==40 || n==44){
            std::cout << "YES" << std::endl;
            std::cout << 6 << " " << 15 << " " << 14 << " " << (n-35) << std::endl;
        }
        else{
            std::cout << "YES" << std::endl;
            std::cout << 6 << " " << 10 << " " << 14 << " " << (n-30) << std::endl;
        }


    }


    return 0;
}
