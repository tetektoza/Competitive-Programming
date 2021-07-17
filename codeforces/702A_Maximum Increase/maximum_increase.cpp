#include <bits/stdc++.h>



int main(){
    int n;
    std::cin >> n;


    auto arr = new int[n];
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    int biggest_len = 1, curr_len = 1;
    int curr = arr[0];
    for(int j = 1; j < n; j++){
        if(curr < arr[j]){
            curr = arr[j];
            curr_len++;
        }
        else{
            curr = arr[j];
            if(curr_len > biggest_len){
                biggest_len = curr_len;
            }
            curr_len = 1; 
        }

        if(curr_len > biggest_len){
            biggest_len = curr_len;
        }
    }
    
    std::cout << biggest_len << std::endl;
    
    delete[] arr;
    return 0;
}
