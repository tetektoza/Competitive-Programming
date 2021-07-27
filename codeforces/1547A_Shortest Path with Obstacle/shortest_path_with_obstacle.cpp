#include <bits/stdc++.h>




int main(){
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++){
        int xa, ya, xb, yb, xf, yf;
        std::cin >> xa >> ya >> xb >> yb >> xf >> yf;

        int max_x = std::max(xa, xb), max_y = std::max(ya, yb);
        int min_x = std::min(xa, xb), min_y = std::min(ya, yb);
        
        int ans = 0;
        if(xa != xb && ya != yb){
            ans = (max_x - min_x) + (max_y - min_y);
        }
        else if(xa != xb){
            ans = max_x - min_x;
            if(xf >= min_x && xf <= max_x && (yf >= min_y && yf <= max_y)){
                ans += 2;
            }
        }
        else if(ya != yb){
            ans = max_y - min_y;
            if(yf >= min_y && yf <= max_y && (xf >= min_x && xf <= max_x)){
                ans += 2;
            }
        }
        
        std::cout << ans << std::endl;

    }



    return 0;
}
