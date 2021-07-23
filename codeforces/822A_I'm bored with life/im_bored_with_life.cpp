#include <bits/stdc++.h>

int fac(int n){
    
    if(n == 1){
        return 1;
    }


    return n*fac(n-1);
}



int main(){
    
    int a, b;
    std::cin >> a >> b;

    int min_val = std::min(a,b);

    int ans = fac(min_val);

    std::cout << ans << std::endl;



    return 0;
}
