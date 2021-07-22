#include <bits/stdc++.h>



int main(){
    int t;

    std::cin >> t;

    while(t--){
        int r, b, d;

        std::cin >> r >> b >> d;
        
        int max, min;
        if(r >= b){
            max = r;
            min = b;
        }
        else{
            max = b;
            min = r;
        }
        
        int ans = max/min;
        if(max % min != 0){
            ans++;
        }

        (std::abs(ans-1) <= d) ? std::cout << "YES" : std::cout << "NO";
        
        std::cout << std::endl;
    }


    return 0;
}
