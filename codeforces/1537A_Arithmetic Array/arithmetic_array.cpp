#include <bits/stdc++.h>



int main(){

    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;

        auto arr = new int[n];
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
            sum += arr[i];
        }
        
        if(sum/(float)n == 1){
            std::cout << 0 << std::endl;
        }
        else if(sum <= n){
            std::cout << 1 << std::endl;
        }
        else{
            std::cout << (sum-n) << std::endl;
        }




        delete[] arr;
    }

    


    return 0;
}
