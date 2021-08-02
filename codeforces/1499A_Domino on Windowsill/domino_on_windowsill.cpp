#include <bits/stdc++.h>


int main(){

    int t;
    std::cin >> t;

    while(t--){
        int n, k1, k2, w, b;
        std::cin >> n >> k1 >> k2 >> w >> b;
        

        int sum_whites = w*2, sum_black = b*2, white_tiles = k1+k2, black_tiles = (n*2)-white_tiles;

        if(black_tiles - sum_black >= 0 && white_tiles - sum_whites >= 0){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }

    }




    return 0;
}
