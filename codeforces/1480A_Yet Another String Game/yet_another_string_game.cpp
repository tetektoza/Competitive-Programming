#include <bits/stdc++.h>



int main(){
    
    int t;
    std::cin >> t;
    while(t--){
        std::string s;
        std::cin >> s;
        
        char a = 'a', b = 'z';
        for(int i = 0; i < s.size(); i++){
            if(i % 2 == 0){
                if(s[i] == a){
                    s[i] = a+1;
                }
                else{
                    s[i] = a;
                }
            }
            else{
                if(s[i] == b){
                    s[i] = b-1;
                }
                else{
                    s[i] = b;
                }
            }
        }

        std::cout << s << std::endl;



    }



    return 0;
}
