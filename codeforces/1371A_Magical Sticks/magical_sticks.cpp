#include <iostream>


int main(){
    
    int t, n;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n;
        
        int pairs;
        if(n % 2 == 0 && n > 2){
            pairs = n/2;
        }
        else if(n > 2){
            pairs = ((n-1)/2)+1;
        }
        else{
            pairs = 1;
        }

        std::cout << pairs << std::endl;
    }



    return 0;
}
