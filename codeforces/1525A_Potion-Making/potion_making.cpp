#include <bits/stdc++.h>


int main(){
    
    int t;
    std::cin >> t;
    while(t--){
        int k;
        std::cin >> k;
        
        int e = 1, w = 0, ans = 0;
        float perc_e;
        while(true){
            perc_e = e/(float)(e+w);
            if(perc_e < (float)k/100){
                e++;
            }
            else if(perc_e > (float)k/100){
                w++;
            }
            else{
                break;
            }

            ans++;
        }

        std::cout << ans+1 << std::endl;
    }


    return 0;
}
