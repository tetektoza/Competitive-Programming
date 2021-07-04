#include <iostream>


int main(){

    int n, k, l, c, d, p, nl, np;
    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int total_milis = k*l, total_limes = c*d, milis_for_every = n*nl, salt_for_every = n*np;
    
    int toasts = 0;
    while(total_milis >= milis_for_every && p >= salt_for_every && total_limes >= n){
        total_milis -= milis_for_every;
        p -= salt_for_every;
        total_limes -= n;
        toasts++;
    }
    

    std::cout << toasts << std::endl;



    return 0;
}
