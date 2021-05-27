#include <iostream>

int main(){
    
    int a, b, max_days, same_socks;
    std::cin >> a >> b;
    if(a > b){
        max_days = b;
        same_socks = (a - b);
    }
    else if(a < b){
        max_days = a;
        same_socks = (b - a);
    }
    else{
        max_days = a;
        same_socks = 0;
    }

    if((same_socks - 1) % 2 == 0 || same_socks % 2 == 0){
        same_socks /= 2;
    }
    else{
        same_socks -= 1;
    }

    std::cout << max_days << " " << same_socks << std::endl;

    return 0;
}
