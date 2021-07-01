#include <iostream>



int main(){
    int t, n;

    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n;

        auto arr = new char[n];
        std::string tasks;
        
        std::cin >> tasks;
        
        int size = 0, flag = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < size; j++){
                if(tasks[i] == arr[j]){
                    flag = 1;
                    goto jumper;
                }
            }


            if(tasks[i] != tasks[i+1]){
                arr[size] = tasks[i];
                size++;
            }

        }
        
        jumper:
        
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
