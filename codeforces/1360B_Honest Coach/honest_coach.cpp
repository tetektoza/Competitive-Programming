#include <iostream>
#include "math.h"

int main(){

    int t, n;
    std::cin >> t;
    for(int i = 0; i < t; i++){
        std::cin >> n;

        auto arr = new int[n];
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }
        
        int tmp = 0;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n-1; j++){
                if(arr[i] > arr[j+1]){
                    tmp = arr[j+1];
                    arr[j+1] = arr[i];
                    arr[i] = tmp;
                }
            }
        }


        int min_val = 10000;
        for(int i = 0; i < n-1; i++){
            if(abs(arr[i] - arr[i+1]) < min_val){
                min_val = abs(arr[i] - arr[i+1]);
            }
        }
        
        std::cout << min_val << std::endl;

        delete[] arr;
    }

    
    return 0;
}
