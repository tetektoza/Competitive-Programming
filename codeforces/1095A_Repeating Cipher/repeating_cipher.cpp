#include <bits/stdc++.h>


int main(){
    
    int n;
    std::string s;
    std::cin >> n >> s;

    std::string ans = "";
    int i = 0, tmp = 0;
    while(i < n){
        ans += s[i];
        tmp++;
        i += tmp;
    }

    std::cout << ans << std::endl;



    return 0;
}
