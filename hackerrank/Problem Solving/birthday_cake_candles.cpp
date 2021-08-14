#include <bits/stdc++.h>


int birthdayCakeCandles(int arr[], int n){
    
    
    int max_ind = 0, tallest = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > arr[max_ind]){
            max_ind = i;
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == arr[max_ind]){
            tallest++;
        }
    }


    return tallest;
}


int main(){

    int n;
    std::cin >> n;
    auto arr = new int[n];

    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    int ans = birthdayCakeCandles(arr, n);

    std::cout << ans << std::endl;
    delete[] arr;



    return 0;    
}
