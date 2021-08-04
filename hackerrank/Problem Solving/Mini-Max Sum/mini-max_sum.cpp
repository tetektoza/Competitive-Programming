#include <bits/stdc++.h>




void miniMaxSum(int arr[]){
    
    long long max_sum = 0, min_sum = 0; 

    int max_ind = 0, min_ind = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i] < arr[min_ind]){
            min_ind = i;
        }

        if(arr[i] > arr[max_ind]){
            max_ind = i;
        }

    }

    for(int i = 0; i < 5; i++){
        if(i == min_ind){
            continue;
        }

        max_sum += arr[i];
    }

    for(int i = 0; i < 5; i++){
        if(i == max_ind){
            continue;
        }

        min_sum += arr[i];
    }

    std::cout << min_sum << " " << max_sum << std::endl;


}





int main(){
    
    auto arr = new int[5];
    for(int i = 0; i < 5; i++){
        std::cin >> arr[i];
    }
    
    miniMaxSum(arr);

    delete[] arr;
    return 0;
}
