#include <bits/stdc++.h>



int main(){
    int t;

    std::cin >> t;
    while(t--){
        int n;
        std::string s, str = "";
        std::cin >> n >> s;
        char last_bin = s[n-1];
        
        for(int i = 0; i < n; i++){
            str += last_bin;
        }


        std::cout << str << std::endl;


    }



    
    return 0;
}
