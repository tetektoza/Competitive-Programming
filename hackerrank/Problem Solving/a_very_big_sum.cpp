#include <bits/stdc++.h>



long aVeryBigSum(int arr[], int size){
    long ans = 0;

    for(int i = 0; i < size; i++){
        ans += arr[i];
    }

    return ans;
}


int main(){
    int n;
    std::cin >> n;
    
    auto arr = new int[n];
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }


    std::cout << aVeryBigSum(arr, n) << std::endl;

    delete[] arr;
    return 0;
}
