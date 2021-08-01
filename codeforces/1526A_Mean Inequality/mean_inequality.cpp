#include <bits/stdc++.h>



int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        n*=2;
        auto arr = new int[n];

        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }
        
        std::sort(arr, arr+n);

        auto ans = new int[n];
        
        int size = 0, size_half = n/2;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                ans[i] = arr[size];
                size++;
            }
            else{
                ans[i] = arr[size_half];
                size_half++;
            }
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
