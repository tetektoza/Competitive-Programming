#include <iostream>



int main(){
    
    int mishka = 0, chris = 0, n;
    
    std::cin >> n;
    
    int m, c;
    for(int i = 0; i < n; i++){
        std::cin >> m >> c;
        if(m > c){
            mishka++;
        }
        else if(c > m){
            chris++;
        }
    }

    if(mishka > chris){
        std::cout << "Mishka" << std::endl;
    }
    else if(chris > mishka){
        std::cout << "Chris" << std::endl;
    }
    else{
        std::cout << "Friendship is magic!^^" << std::endl;
    }

    return 0;
}
