#include <iostream>



int main(){

    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++){

        int number, cnt = 1, mod = 10;

        std::cin >> number;

        while(number % mod != number){
            mod *= 10;
            cnt++;
        
        }

        auto array_of_rounds = new int[cnt];

        mod = 10;
        int prev = 0, cnt_rounds = 0;

        for(int i = 0; i < cnt; i++){
            if(number % mod != prev){
                array_of_rounds[cnt_rounds] = (number % mod)-prev;
                cnt_rounds++;
                prev = number % mod;
            }

            mod *= 10;
        }
        
        std::cout << cnt_rounds << std::endl;

        for(int i = 0; i < cnt_rounds; i++){
            std::cout << array_of_rounds[i] << " ";
        }

        std::cout << std::endl;
        
        delete[] array_of_rounds;

    }


    return 0;
}
