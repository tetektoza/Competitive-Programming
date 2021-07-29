#include <bits/stdc++.h>




int main(){

    int n, m;
    std::cin >> n >> m;

    int ans = 0, a_sq, b_sq;
    for(int i = 0; i <= sqrt(n); i++){
        for(int j = 0; j <= m; j++){
            a_sq = i*i; b_sq = j*j;

            if(a_sq + j == n && i + b_sq == m){
                ans++;
            }
        }
    }

    std::cout << ans << std::endl;


    return 0;
}
