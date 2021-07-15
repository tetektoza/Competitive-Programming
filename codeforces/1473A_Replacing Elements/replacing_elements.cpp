#include <bits/stdc++.h>




int main(){
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t, n, d;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n >> d;
        
        auto arr = new int[n];
        
        int flag = 0;
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
            if(arr[i] > d){
                flag = 1;
            }
        }

        if(!flag){
            std::cout << "YES" << std::endl;
            delete[] arr;
            continue;
        }
        

        std::sort(arr, arr+n);
        
        if(arr[0] + arr[1] <= d){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }

        
        delete[] arr;
    }



    return 0;
}
