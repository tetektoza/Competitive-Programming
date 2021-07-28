#include <bits/stdc++.h>



int main(){

    int t;
    std::cin >> t;

    while(t--){
        long x, y, a, b;
        std::cin >> x >> y >> a >> b;
        
        if((y-x) % (a+b) == 0){
            std::cout << (y-x)/(a+b) << std::endl;
        }
        else{
            std::cout << -1 << std::endl;
        }

    }




    return 0;
}
