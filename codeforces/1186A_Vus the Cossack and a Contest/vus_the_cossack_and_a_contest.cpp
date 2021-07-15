#include <iostream>


int main(){
    int n, m, k;

    std::cin >> n >> m >> k;

    if(k < n || m < n){
        std::cout << "No" << std::endl;
    }
    else{
        std::cout << "Yes" << std::endl;
    }


    return 0;
}
