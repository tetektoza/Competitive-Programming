#include <bits/stdc++.h>


int main(){

    int a1, a2, a3, b1, b2, b3, n;

    std::cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;

    int sum_a = std::ceil((a1+a2+a3)/5.), sum_b = std::ceil((b1+b2+b3)/10.);

    if((sum_a+sum_b) > n){
        std::cout << "NO" << std::endl;
    }
    else{
        std::cout << "YES" << std::endl;
    }

    return 0;
}
