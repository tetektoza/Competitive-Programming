#include <iostream>



int main(){

    int t, n;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        int flag = 0;
        std::cin >> n;
        if(n == 2){
            flag = 1;
        }
        auto arr = new int[n];
        
        unsigned long long even_numbers = 0, odd_numbers = 1;

        unsigned long long sum_even = 0;
        

        for(int i = 0; i < n/2; i++){
            even_numbers += 2;
            arr[i] = even_numbers;
            sum_even += even_numbers;
        }
        

        unsigned long long check_sum = sum_even;
        for(int i = n/2; i < n; i++){
            if(i == n/2){
                check_sum -= odd_numbers;
                arr[i] = odd_numbers;
                odd_numbers += 2;
            }
            else{
                if(check_sum - odd_numbers < odd_numbers){
                    if(check_sum % 2 != 0){
                        arr[i] = check_sum;
                        break;
                    }
                    else{
                        flag = 1;
                    }
                }
                else{
                    check_sum -= odd_numbers;
                    arr[i] = odd_numbers;
                    odd_numbers += 2;
                }
            }
        }
        


        if(flag != 1){
            std::cout << "YES" << std::endl;
            for(int i = 0; i < n; i++){
                std::cout << arr[i] << " ";
            }
        }
        else{
            std::cout << "NO" << std::endl;
        }
        delete[] arr;
    
    }

    return 0;
}
