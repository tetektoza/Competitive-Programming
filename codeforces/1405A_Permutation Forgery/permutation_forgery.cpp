#include <bits/stdc++.h>



int main(){
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        
        auto arr = new int[n];
        auto ans = new int[n];
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }
        
        int size = 0;
        for(int i = n-1; i >= 0; i--){
            ans[size] = arr[i];
            size++;
        }

        for(int i = 0; i < n; i++){
            std::cout << ans[i] << " ";
        }

        std::cout << std::endl;
        
        delete[] arr;
        delete[] ans;
    }


    return 0;
}
