#include <iostream>


int main(){
    
    int t, n;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n;
        

        for(int i = 0; i < n; i++){
            if(i == 1){
                std::cout << 999 << " ";
                continue;
            }
            std::cout << 1 << " ";
        }

        std::cout << std::endl;

    }




    return 0;
}
