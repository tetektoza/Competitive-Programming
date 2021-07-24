#include <bits/stdc++.h>


int main(){
    
    int n;
    std::string fav_num;
    std::cin >> n >> fav_num;
    
    int ns = 0, rs = 0;
    for(int i = 0; i < n; i++){
        if(fav_num[i] == 'n'){
            ns++;
        }
        else if(fav_num[i] == 'r'){
            rs++;
        }
    }

    for(int i = 0; i < ns; i++){
        std::cout << "1 ";
    }

    for(int i = 0; i < rs; i++){
        std::cout << "0 ";
    }

    std::cout << std::endl;


    return 0;
}
