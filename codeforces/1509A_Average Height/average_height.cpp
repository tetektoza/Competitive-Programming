#include <bits/stdc++.h>



int main(){

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

        
        int front = 0, back = n-1;
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 == 0){
                ans[front] = arr[i];
                front++;
            }
            else{
                ans[back] = arr[i];
                back--;
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
