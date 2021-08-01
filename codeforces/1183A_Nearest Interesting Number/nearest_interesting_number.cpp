#include <bits/stdc++.h>


int main(){
    
    int a;
    std::cin >> a;
    
    int sum = 0, tmp = a;
    while(true){
        while(tmp){
            sum += tmp%10;
            tmp /= 10;
        }

        if(sum % 4 == 0){
            break;
        }
        else{
            a++;
            tmp = a;
            sum = 0;
        }
    }

    std::cout << a << std::endl;



    return 0;
}
