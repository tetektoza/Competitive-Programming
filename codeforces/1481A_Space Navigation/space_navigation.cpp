#include <bits/stdc++.h>



int main(){
    
    int t;
    std::cin >> t;
    while(t--){
        int px, py;
        std::string s;
        std::cin >> px >> py >> s;
        
        int rs = 0, us = 0, ds = 0, ls = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'U'){
                us++;
            }
            else if(s[i] == 'D'){
                ds++;
            }
            else if(s[i] == 'R'){
                rs++;
            }
            else{
                ls++;
            }
        }
        
        int start_x = (rs-ls), start_y = (us-ds);
         
        int flag_one = 0, flag_two = 0;
        
        if(start_x == px) flag_one = 1;
        else if(start_x > px && start_x-rs <= px) flag_one = 1;
        else if(start_x < px && start_x+ls >= px) flag_one = 1;
        
        if(start_y == py) flag_two = 1;
        else if(start_y > py && start_y-us <= py) flag_two = 1;
        else if(start_y < py && start_y+ds >= py) flag_two = 1;
        
        if(flag_one && flag_two){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }
    }
    


    return 0;
}
