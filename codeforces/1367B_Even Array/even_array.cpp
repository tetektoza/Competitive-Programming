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

        int flag = 0, moves = 0;
        for(int i = 0; i < n; i++){
            if((arr[i] % 2 != 0 && i % 2 == 0) || (arr[i] % 2 == 0 && i % 2 != 0)){
                flag = 1;
                for(int j = 0; j < n; j++){
                    if(i == j){
                        continue;
                    }

                    if((arr[i] % 2 != 0 && i % 2 == 0) && (arr[j] % 2 == 0 && j % 2 != 0)){
                        std::swap(arr[i], arr[j]);
                        flag = 0;
                        moves++;    
                    }
                    else if((arr[i] % 2 == 0 && i % 2 != 0) && (arr[j] % 2 != 0 && j % 2 == 0)){
                        std::swap(arr[i], arr[j]);
                        flag = 0;
                        moves++;
                    }
                }

                if(flag){
                    break;
                }
            }
        }
        
        if(flag){
            std::cout << -1 << std::endl;
        }
        else{
            std::cout << moves << std::endl;
        }


        delete[] arr;

    }


    return 0;
}
