#include <iostream>


int main(){
    
    int t, a, b;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> a >> b;
        
        int moves = 0;

        if(a > b){
            int distance = a - b;
            if(distance % 2 != 0){
                moves += 2;
            }
            else{
                moves++;
            }
        }
        else if(a < b){
            int distance = b - a;
            if(distance % 2 != 0){
                moves++;
            }
            else{
                moves += 2;
            }
        }
        

        std::cout << moves << std::endl;
    }


    return 0;
}
