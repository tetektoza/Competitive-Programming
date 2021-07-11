#include <bits/stdc++.h>


int main(){
    
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    int t, n;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n;
        

        auto arr = new int[n];
        
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }

        std::sort(arr, arr+n);
        
        int cnt = 1;
        for(int i = 0; i < n-1; i++){
            if(arr[i+1] > arr[i]){
                cnt++;
            }
        }
        
        std::cout << cnt << std::endl;
        
        delete[] arr;
    }

    return 0;
}
