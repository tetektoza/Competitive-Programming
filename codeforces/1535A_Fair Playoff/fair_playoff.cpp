#include <iostream>



int main(){
    
    int t;

    std::cin >> t;

    for(int i = 0; i < t; i++){

        auto arr = new int[4];

        for(int i = 0; i < 4; i++){
            std::cin >> arr[i];
        }
        
        int first_ind, second_ind;

        if(arr[0] > arr[1]){
            first_ind = 0;
        }
        else{
            first_ind = 1;
        }

        if(arr[2] > arr[3]){
            second_ind = 2;
        }
        else{
            second_ind = 3;
        }
        
        int flag = 0;
        for(int i = 0; i < 4; i++){
            if(i == first_ind || i == second_ind){
                continue;
            }

            if(arr[first_ind] < arr[i] || arr[second_ind] < arr[i]){
                flag = 1;
                break;
            }
        }

        if(flag){
            std::cout << "NO" << std::endl;
        }
        else{
            std::cout << "YES" << std::endl;
        }
    
        delete[] arr;
    }



    return 0;
}
