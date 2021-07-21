#include <bits/stdc++.h>

int main(){

    int q;
    std::cin >> q;
    while(q--){
        
        int n;

        std::cin >> n;

        auto arr = new int[n];
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
            sum += arr[i];
        }

        if(sum % n == 0){
            std::cout << sum/n << std::endl;
        }
        else{
            int a = (sum/n)+1;
            std::cout << (sum + a*n-sum)/n << std::endl;
            
        }
    
        delete[] arr;
    }


    return 0;
}
