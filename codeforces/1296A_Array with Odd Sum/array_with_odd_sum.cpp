#include <iostream>

int main(){

    int t, n;

    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n;

        int num;

        int sum = 0, odd = 0;
        for(int i = 0; i < n; i++){
            std::cin >> num;
            sum += num;
            if(num % 2 != 0){
                odd++;
            }
        }


        if(sum % 2 != 0 || (odd > 0 && odd < n)){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }

    }


    return 0;
}
