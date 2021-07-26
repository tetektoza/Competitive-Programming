#include <bits/stdc++.h>


int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        
        int ups = 0;

        auto arr = new int[n];
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }
        
        for(int i = 0; i < n; i++){
            if(arr[i] != 2){
                ups++;
            }
        }

        std::cout << ups << std::endl;

        delete[] arr;
        
    }




    return 0;
}
