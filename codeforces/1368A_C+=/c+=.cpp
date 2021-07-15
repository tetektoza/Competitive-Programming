#include <iostream>


int main(){
    
    int t, a, b, n;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> a >> b >> n;
        
        int tmp;
        if(a > b){
            tmp = b;
            b = a;
            a = tmp;   
        }
        
        int moves = 0;
        tmp = -1;
        while(tmp <= n){
            a += b;

            tmp = a;
            a = b;
            b = tmp;

            moves++;
        }


        std::cout << moves << std::endl;

    }


    return 0;
}
