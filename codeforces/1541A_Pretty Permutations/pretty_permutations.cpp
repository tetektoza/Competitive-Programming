#include <bits/stdc++.h>



int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        
        auto arr = new int[n];

        for(int i = 0; i < n; i++){
            arr[i] = i+1;
        }

        int tmp;
        for(int i = 0; i < n; i++){
            if(arr[i] == i+1){
                if(i+1 < n){
                    tmp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = tmp;
                }
                else{
                    tmp = arr[i];
                    arr[i] = arr[i-1];
                    arr[i-1] = tmp;
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            std::cout << arr[i] << " ";
        }

        std::cout << std::endl;

        delete[] arr;
    }
    


    return 0;
}
