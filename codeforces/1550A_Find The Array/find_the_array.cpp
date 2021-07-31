#include <bits/stdc++.h>


int main(){

    int t;
    std::cin >> t;

    while(t--){
        int s;

        std::cin >> s;
        
        if(s == 1){
            std::cout << 1 << std::endl;
            continue;
        }


        int sum = 1, sum_ov = 0, ans = 0;
        while(true){
            sum_ov += sum;
            ans++;
            if(sum_ov >= s){
                break;
            }

            sum += 2;
        }
        
        std::cout << ans << std::endl;

    }




    return 0;
}
