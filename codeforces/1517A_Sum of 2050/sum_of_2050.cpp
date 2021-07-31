#include <bits/stdc++.h>



int main(){
    int t;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        unsigned long long n;

        std::cin >> n;

        if(n % 2050 != 0){
            std::cout << -1 << std::endl;
            continue;
        }
        
        unsigned long long res = n/2050;
        int ans = 0;
        while(res > 0){
            ans += res % 10;
            res /= 10;
        }

        std::cout << ans << std::endl;

    }



    return 0;
}
