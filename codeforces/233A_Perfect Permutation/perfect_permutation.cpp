#include <bits/stdc++.h>




int main(){
    int n;
    std::cin >> n;

    if(n % 2 == 0){
        int rev = n;
        for(int i = 0; i < n; i++){
            std::cout << rev << " ";
            rev--;
        }

        std::cout << std::endl;
    }
    else{
        std::cout << -1 << std::endl;
    }


    return 0;
}
