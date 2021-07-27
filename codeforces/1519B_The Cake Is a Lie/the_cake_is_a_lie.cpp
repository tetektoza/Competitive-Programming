#include <bits/stdc++.h>


int main(){

    int t;
    std::cin >> t;
    while(t--){
        int n, m, k;
        std::cin >> n >> m >> k;

        int steps_x = (n-1), steps_y = (m-1)*n;
        
        k -= steps_x + steps_y;
        
        (k == 0) ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;
    }



    return 0;
}
