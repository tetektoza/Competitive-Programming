#include <bits/stdc++.h>



int main(){
    
    auto arr = new int[4];

    for(int i = 0; i < 4; i++){
        std::cin >> arr[i];
    }
    
    int min = 0;
    for(int i = 0; i < 4; i++){
        if(i == 1){
            continue;
        }

        if(arr[i] <= arr[min]){
            min = i; 
        }
    }

    int max_256 = arr[min]*256;
    
    int max_32;
    if(arr[1] <= arr[0]-arr[min]){
        max_32 = arr[1]*32;
    }
    else{
        max_32 = (arr[0]-arr[min])*32;
    }


    std::cout << max_256+max_32 << std::endl;

    delete[] arr;
    return 0;
}
