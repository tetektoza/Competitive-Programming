#include <iostream>


int main(){

    int t, n;
    
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n;

        auto arr = new int[n];

        for(int i = 0; i < n; i++){
            std::cin >> arr[i];

        }
        
        int ind;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j){
                    continue;
                }

                if(arr[i] != arr[j]){
                    if(j+1 != n){
                        if(arr[j+1] != arr[j]){
                            ind = j+1;
                        }
                        else{
                            ind = i+1;
                        }
                    }
                    else{
                        if(arr[j-1] != arr[j]){
                            ind = j+1;
                        }
                        else{
                            ind = i+1;
                        }
                    }
                   
                   goto end; 
                }
            }
        }
    
        
        end:

        std::cout << ind << std::endl;

        delete[] arr;
    }


    return 0;
}
