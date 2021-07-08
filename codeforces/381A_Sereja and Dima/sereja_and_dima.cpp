#include <iostream>



int main(){
    int n;
    std::cin >> n;

    auto arr = new int[n];
    
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }


    int x = 0, sereja_sum = 0, dima_sum = 0, arr_len = n-1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0 && arr[x] > arr[arr_len]){
            sereja_sum += arr[x];
            x++;
            continue;
        }
        else if(i % 2 == 0){
            sereja_sum += arr[arr_len];
            arr_len--;
            continue;
        }


        if(arr[x] > arr[arr_len]){
            dima_sum += arr[x];
            x++;
        }
        else{
            dima_sum += arr[arr_len];
            arr_len--;
        }
    }

    std::cout << sereja_sum << " " << dima_sum << std::endl;
    
    delete[] arr;
}
