#include <bits/stdc++.h>



int main(){

    int n;
    std::cin >> n;

    auto arr = new int[n];


    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    
    int same = 1, ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }

            if(arr[i] == arr[j]){
                same++;
            }
        }

        if(same > ans){
            ans = same;
        }

        same = 1;
    }
    
    std::cout << ans << std::endl;

    delete[] arr;
    return 0;
}
