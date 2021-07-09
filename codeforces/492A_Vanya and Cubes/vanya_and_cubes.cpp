#include <iostream>


int main(){

    int n;
    std::cin >> n;
    
    int it = 0, tmp = 0;
    while(true){
        it++;
        tmp += it;
        n -= tmp;
        if(n < (tmp + it+1)){
            break;
        }


    }
    
    std::cout << it << std::endl;


    return 0;
}
