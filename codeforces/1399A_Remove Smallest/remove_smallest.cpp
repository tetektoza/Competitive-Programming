#include <iostream>
#include <math.h>

int main(){

    int t, n, element, cnt;

    std::cin >> t;
    for(int i = 0; i < t; i++){

        std::cin >> n;
        auto arr = new int[n];
        cnt = n;
        
        for(int i = 0; i < n; i++){
            std::cin >> element;
            arr[i] = element;
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-1; j++){
                if(arr[j] > arr[j+1]){
                    std::swap(arr[j], arr[j+1]);
                }
            }
            
        }

        for(int i = 1; i < n; i++){
            if(abs(arr[i]-arr[i-1]) <= 1) {
                cnt--;
            }
        }         
        
        if(cnt == 1){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }

    }

    return 0;
}
