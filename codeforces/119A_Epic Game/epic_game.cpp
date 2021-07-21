#include <bits/stdc++.h>


int main(){
    
    int a, b, n;
    std::cin >> a >> b >> n;
    
    int i = 0, curr;
    while(n > 0){

        if(i % 2 == 0){
            curr = a;
        }
        else{
            curr = b;
        }
        
        if(n > curr){
            if(n % curr == 0){
                n -= curr;
            }
            else{
                n -= 1;
            }
        }
        else{
            if(curr % n == 0){
                n -= n;
            }
            else{
                n -= 1;
            }
        }
        
        i++;    
    }

    if(i % 2 != 0){
        std::cout << 0 << std::endl;
    }
    else{
        std::cout << 1 << std::endl;
    }

    return 0;
}
