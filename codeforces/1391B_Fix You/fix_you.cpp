#include <bits/stdc++.h>



int main(){
    int t;
    std::cin >> t;

    while(t--){
        int n, m;
        std::cin >> n >> m;

        std::vector<std::vector<char>> vec(n, std::vector<char> (m));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                std::cin >> vec[i][j];
            }
        }
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(vec[i][m-1] == 'R'){
                ans++;
            }
        }

        for(int i = 0; i < m; i++){
            if(vec[n-1][i] == 'D'){
                ans++;
            }
        }

        std::cout << ans << std::endl;

    }

    return 0;
}
