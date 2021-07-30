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

        std::set<int> diff;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                diff.insert(arr[j]-arr[i]);
            }
        }
        
        std::cout << diff.size() << std::endl;
        

        delete[] arr;
    }


    return 0;
}
