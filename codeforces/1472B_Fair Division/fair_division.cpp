#include <iostream>



int main(){
    int t, n;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n;
        
        int candy, sum = 0;
        for(int i = 0; i < n; i++){
            std::cin >> candy;
            sum += candy;
        }
        
        int flag = 0;
        if(n % 2 != 0 && n > 1){
            if(sum/2 < n && sum % 2 == 0){
                flag = 1;
            }
        }
        else if(n > 1){
            if(sum % 2 == 0){
                flag = 1;
            }
        }


        if(flag){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }

    }
    
    return 0;
}
