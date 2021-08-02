#include <bits/stdc++.h>




int main(){

    int n;
    std::cin >> n;

    auto arr = new int[n];
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
        sum += arr[i];
    }


    std::cout << sum << std::endl;

    
    delete[] arr;
    return 0;
}
