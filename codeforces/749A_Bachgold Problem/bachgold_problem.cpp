#include <iostream>



int main(){

    int n;
    std::cin >> n;
    
    int result = 0, cnt = 0;
    if(n % 2 == 0){
        cnt = n/2;
        std::cout << cnt << std::endl;
        for(int i = 0; i < cnt; i++){
            std::cout << "2" << "\t";
        }
    }
    else{
        cnt = (n-1)/2;
        std::cout << cnt << std::endl;
        for(int i = 0; i < cnt-1; i++){
            std::cout << "2" << "\t";
        }

        std::cout << "3";
    }
    


    return 0;
}
