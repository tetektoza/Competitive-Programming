#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        unsigned long long a, b, k;
        std::cin >> a >> b >> k;
        
        unsigned long long div = (k % 2 == 0) ? k/2 : (k/2)+1;

        long long ans = a*div - b*(k/2);

        std::cout << ans << std::endl;


    }


    return 0;
}
