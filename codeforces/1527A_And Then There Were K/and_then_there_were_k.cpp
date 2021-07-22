#include <bits/stdc++.h>




int main(){
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;
        
        int k = 0;
        if(n > 1){
            k = 1;
            while(k*2 <= n){
                k *= 2;
            }

            k -= 1;
        }

        std::cout << k << std::endl;
    }



    return 0;
}
