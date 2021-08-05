#include <bits/stdc++.h>

// O(n) solution

int main(){

    int t;
    std::cin >> t;

    while(t--){
        
        std::string s;
        std::cin >> s;

        int a = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a'){
                a++;
            }
        }


        if(a==s.size()){
            std::cout << "NO" << std::endl;
            continue;
        }


        std::string ls = 'a' + s;
        std::string rs = s + 'a';
        
        int size = ls.size()-1;
        int flag_l = 0, flag_r = 0;
        for(int i = 0; i < ls.size(); i++){
            if(s[i] != rs[size]){
                flag_r = 1;
                break;
            }
            else if(s[i] != ls[size]){
                flag_l = 1;
                break;
            }

            size--;
        }
        
        std::cout << "YES" << std::endl;

        if(flag_l){
            std::cout << ls << std::endl; 
        }
        else{
            std::cout << rs << std::endl;
        }


    }
}

// one of the solutions - O(n) and less memory
// also less straight forward i guess..
/*
int main(){

    int t;

    std::cin >> t;

    while(t--){
        std::string s;
        std::cin >> s;
        
        int a = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a'){
                a++;
            }
        }


        if(a == s.size()){
            std::cout << "NO" << std::endl;
            continue;
        }
        
        std::cout << "YES" << std::endl;
        
        int size = s.size()-1;
        std::string ans = "";
        int flag = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != s[size] && flag == 0){
                ans += s[i];
                ans += 'a';
                flag = 1;
            }
            else{
                ans += s[i];
            }
            
            size--;
        }

        if(!flag){
            ans += 'a';
        }
        
        std::cout << ans << std::endl;


    }



    return 0;
}
*/
