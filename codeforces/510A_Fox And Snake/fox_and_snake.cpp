#include <iostream>



int main(){

    int n, m, prev = 1;
    std::cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int i = 0; i < m; i++){
                std::cout << "#";
            }
            std::cout << std::endl;
        }
        else{
            if(prev % 2 == 0){
                std::cout << "#";
                for(int i = 0; i < m-1; i++){
                    std::cout << ".";
                }

                prev++;
                std::cout << std::endl;
            }
            else{
               for(int i = 0; i < m-1; i++){
                    std::cout << ".";
               }
                
                std::cout << "#";
                prev++;
                std::cout << std::endl;
            }
        }


    }

    return 0;
}
