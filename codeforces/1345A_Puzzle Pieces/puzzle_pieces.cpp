#include <bits/stdc++.h>



int main(){

    int t;
    std::cin >> t;

    while(t--){
        int n, m;
        std::cin >> n >> m;

        if(n == 1 || m == 1 || (n == 2 && m == 2)){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }
    }


    return 0;
}
