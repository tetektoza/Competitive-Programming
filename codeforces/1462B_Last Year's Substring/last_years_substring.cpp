#include <bits/stdc++.h>

int main(){
    
    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        std::string s;
        std::cin >> n >> s;
        
        std::string cmp = "2020";

        int size = 0, size_rev = 3;
        int flag = 0;    
        for(int i = 0; i < n; i++){
            if(s[i] == cmp[size]){
                size++;
            }
            else{
                for(int j = n-1; j > i-1; j--){
                    if(s[j] == cmp[size_rev]){
                        size_rev--;
                    }
                    else{
                        flag = 1;
                        break;
                    }

                    if(size_rev == size-1){
                        break;
                    }
                }

                break;
            }

           if(size == 4){
               break;  
           } 
        }


        if(flag){
            std::cout << "NO" << std::endl;
        }
        else{
            std::cout << "YES" << std::endl;
        }


    }
    return 0;
}
