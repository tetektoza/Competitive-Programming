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
        
        int curr = 0, max = 1;
        for(int i = 0; i < n-1; i++){
            if(arr[i] != arr[i+1]){
                if(curr >= max){
                    max = curr+1;
                    curr = 0;
                }
                else{
                    curr = 0;
                }
            }
            else{
                curr++;

                if(curr >= max){
                    max = curr+1;
                }
            }
        }
        
        std::cout << max << std::endl;

        delete[] arr;
    }


    return 0;
}
