#include <bits/stdc++.h>


int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n, m;
        std::cin >> n >> m;
        
        auto arr_n = new int[n];
        auto arr_m = new int[m];
        for(int i = 0; i < n; i++){
            std::cin >> arr_n[i];
        }

        for(int i = 0; i < m; i++){
            std::cin >> arr_m[i];
        }
        
        int num = 0;    
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(arr_n[i] == arr_m[j]){
                    num = arr_n[i];
                    break;
                }
            }
        }


        if(num == 0){
            std::cout << "NO" << std::endl;
        }
        else{
            std::cout << "YES" << std::endl;
            std::cout << 1 << " " << num << std::endl;
        }
                


        delete[] arr_n;
        delete[] arr_m;
    }




    return 0;
}
