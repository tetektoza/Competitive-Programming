#include <iostream>


int main(){
    int k, r, shovels = 1;
    std::cin >> k >> r;

    int sum = k;
    while((((sum - sum%10) + r) != sum) && sum%10 != 0){
        shovels++;
        sum = k * shovels;
    }

    std::cout << shovels << std::endl;



    return 0;
}
