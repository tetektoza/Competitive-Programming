#include <bits/stdc++.h>

int diagonalDifference(std::vector<std::vector<int>> vec, int n){
    int diag_right = 0, diag_left = 0;
    
    int j = 0;
    for(int i = 0; i < n; i++){
        diag_right += vec[i][j];
        j++;
    }

    j = n-1;
    for(int i = 0; i < n; i++){
        diag_left += vec[i][j];
        j--;
    }

    int ans = std::abs(diag_right-diag_left);
    
    return ans;
}



int main(){
    
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> vec(n, std::vector<int>(n));
    int a;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cin >> vec[i][j];
        }
    }

    int ans = diagonalDifference(vec, n);

    std::cout << ans << std::endl;


    return 0;
}
