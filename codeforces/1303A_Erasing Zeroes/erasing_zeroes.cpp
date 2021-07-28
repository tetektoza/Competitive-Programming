#include <bits/stdc++.h>


int main(){

    int t;
    std::cin >> t;
    while(t--){
        std::string s;
        std::cin >> s;


        int flag = 0, sum = 0, ans = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1' && flag == 0){
                flag = 1;
            }
            else if(s[i] == '1'){
                ans += sum;
                sum = 0;
            }
            else if(flag == 1){
                sum++;
            }
        }

        std::cout << ans << std::endl;

    }




    return 0;
}
