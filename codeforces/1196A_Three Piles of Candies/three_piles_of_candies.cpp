#include <bits/stdc++.h>


int main(){
    
    int q;
    std::cin >> q;

    while(q--){
        auto arr = new long long[3];
        
        int max_ind = 0;
        for(int i = 0; i < 3; i++){
            std::cin >> arr[i];

            if(arr[i] >= arr[max_ind]){
                max_ind = i;
            }
        }
        
        auto arr_out = new long long[3];
        arr_out[2] = arr[max_ind];

        long long prev = 0;
        for(int i = 0; i < 3; i++){
            if(i == max_ind){
                continue;
            }
            
            if(prev >= arr[i]){
                arr_out[1] = prev;
                arr_out[0] = arr[i];
            }
            else{
                arr_out[1] = arr[i];
                arr_out[0] = prev;
            }

            prev = arr[i];
        }
        
        long long alice = arr_out[0] + ((arr_out[2] - (arr_out[1]-arr_out[0]))/2) + (arr_out[1] - arr_out[0]);

        std::cout << alice << std::endl;

        delete[] arr_out;
        delete[] arr;
    }




    return 0;
}
