#include <iostream>


int main(){

    int n;
    std::cin >> n;

    int cnt = 1;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            cnt++;
        }
    }

    std::cout << cnt << std::endl;

    return 0;
}
