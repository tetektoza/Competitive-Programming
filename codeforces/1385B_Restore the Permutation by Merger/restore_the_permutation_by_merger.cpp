#include <iostream>



int main(){
    
    int t;

    std::cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        std::cin >> n;

        auto arr = new int[n*2];
        
        auto init_perm = new int[n];

        int size = 0, flag;
        for(int i = 0; i < n*2; i++){
            std::cin >> arr[i];
            
            flag = 0;
            for(int j = 0; j < size; j++){
                if(arr[i] == init_perm[j]){
                    flag = 1;
                    break;
                }
            }

            if(flag == 0){
                init_perm[size] = arr[i];
                size++; 
            }
            
        }

        for(int i = 0; i < n; i++){
            std::cout << init_perm[i] << " ";
        } 
        
        std::cout << std::endl;


        delete[] arr;
        delete[] init_perm;

    }




}
