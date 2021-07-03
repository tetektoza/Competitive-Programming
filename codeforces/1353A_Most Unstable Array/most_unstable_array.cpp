#include <iostream>



int main(){
    
    int t;
    
    std::cin >> t;
    
    int n, m;
    for(int i = 0; i < t; i++){
        std::cin >> n >> m;
        
        int result;
        if(n == 1){
            result = 0;
        }
        else if(n == 2){
            result = m;
        }
        else{
            result = 2*m;
        }


        std::cout << result << std::endl;

    }


    return 0;
}
