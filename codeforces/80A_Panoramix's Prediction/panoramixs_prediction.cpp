#include <bits/stdc++.h>


int main(){

    int prime, next_prime;
    std::cin >> prime >> next_prime;


    prime += 1;
    
    int cnt = 2;
    while(true){
        for(int i = 2; i < 10; i++){
            if(i == prime){
                continue;
            }

            if(prime % i == 0){
                cnt++;
            }
        }
    
        if(cnt == 2){
            break;
        }

        cnt = 2;
        prime++;
    }

    if(prime != next_prime){
        std::cout << "NO" << std::endl;
    }
    else{
        std::cout << "YES" << std::endl;
    }

    return 0;
}
