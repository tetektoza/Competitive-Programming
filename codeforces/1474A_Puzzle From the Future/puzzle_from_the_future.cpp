#include <bits/stdc++.h>



int main(){
    
    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::string b;
        std::cin >> n >> b;

        std::string ans = "";
        
        int prev = -1;
        for(int i = 0; i < n; i++){
            if(b[i] == '0' && prev != 1){
                ans += '1';
                prev = 1;
            }
            else if(b[i] == '1' && prev != 2){
                ans += '1';
                prev = 2;
            }
            else if(b[i] == '1' && prev == 2){
                ans += '0';
                prev = 1;
            }
            else{
                ans += '0';
                prev = 0;
            }
        }

        std::cout << ans << std::endl;


    }


    return 0;
}
