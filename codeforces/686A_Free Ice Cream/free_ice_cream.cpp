#include <bits/stdc++.h>


int main(){
    
    int n, d;
    long long x;
    char plus_minus;
    std::cin >> n >> x;
    

    int diss = 0;
    for(int i = 0; i < n; i++){
        std::cin >> plus_minus >> d;

        if(plus_minus == '+'){
            x += d;
        }
        else if(x-d >= 0){
            x -= d;
        }
        else{
            diss++;
        }

    }

    std::cout << x << " " << diss << std::endl;



    return 0;
}
