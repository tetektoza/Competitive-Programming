#include <bits/stdc++.h>




int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;

        auto arr = new int[n];

        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }
    

        if((arr[0] + arr[1]) > arr[n-1]){
            std::cout << -1 << std::endl;
        }
        else{
            std::cout << 1 << " " << 2 << " " << n << std::endl;
        }
        
        delete[] arr;    
    }

    return 0;
}
