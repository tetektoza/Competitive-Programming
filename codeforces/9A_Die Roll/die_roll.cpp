#include <iostream>



int main(){
    
    int y, w;
    std::cin >> y >> w;
    
    int max;
    if(y > w){
        max = y;
    }
    else{
        max = w;
    }
    
    max = 6 - (max-1);
    if(6 % max == 0){
        std::cout << 1 << "/" << 6/max << std::endl;   
    }
    else if(max == 4){
        std::cout << "2/3" << std::endl;
    }
    else{
        std::cout << "5/6" << std::endl;
    }

    
    return 0;
}
