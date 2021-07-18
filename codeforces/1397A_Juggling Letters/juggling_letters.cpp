#include <bits/stdc++.h>


int main(){

    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;
        std::vector<std::string> vect;
        
        std::string a;
        for(int i = 0; i < n; i++){
            std::cin >> a;
            vect.push_back(a);
        }
        
        std::vector<int> arr(26);
        int ind;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < vect[i].size(); j++){
                ind = (vect[i][j]) - 97;
                arr[ind] += 1;
            }
        }
        
        int flag = 0;
        for(int i = 0; i < 26; i++){
            if(arr[i] % n != 0){
                flag = 1;
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

