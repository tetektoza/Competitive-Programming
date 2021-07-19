#include <bits/stdc++.h>



int main(){
    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;

        auto arr = new int[n];
        
        int min = 0, x = 0;
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }
        
        if(n == 1){
            std::cout << 0 << std::endl;
            delete[] arr;
            continue;
        }

        std::sort(arr, arr + n);

        int avg = (arr[0]+arr[1])/2;
        int dels = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > avg){
                dels++;
            }
        }

        std::cout << dels << std::endl;

        delete[] arr;
    }   



    return 0;
}
