#include <bits/stdc++.h>


int main(){

    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;

        auto arr = new int[n];
        
        int min = 0;
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];

            if(arr[i] <= arr[min]){
                min = i;
            }
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] != arr[min]){
                ans++;
            }
        }

        std::cout << ans << std::endl;


        delete[] arr;
    }



    return 0;
}
