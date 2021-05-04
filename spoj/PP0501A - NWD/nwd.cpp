#include <iostream>
#include <cstdio>

int NWD(int a, int b){
    if (b == 0){
        return a;
    }

    NWD(b, a % b);
}



int main(){

    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++){
        unsigned int a, b, nwd;
        scanf("%d %d", &a, &b);
        nwd = NWD(a, b);

        std::cout << nwd << std::endl;
    }


    return 0;
}