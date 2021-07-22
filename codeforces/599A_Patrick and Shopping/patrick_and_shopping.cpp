#include <bits/stdc++.h>



int main(){

    int d1, d2, d3;


    std::cin >> d1 >> d2 >> d3;


    long long d1_d2 = 2*d1+2*d2, d1_d3 = 2*d1+2*d3, d2_d3 = 2*d2+2*d3, d1_d2_d3 = d1+d2+d3;
    
    long long ans;
    if(d1_d2 <= d1_d3 && d1_d2 <= d2_d3 && d1_d2 <= d1_d2_d3){
        ans = d1_d2;
    }
    else if(d1_d3 <= d1_d2 && d1_d3 <= d2_d3 && d1_d3 <= d1_d2_d3){
        ans = d1_d3;
    }
    else if(d2_d3 <= d1_d2 && d2_d3 <= d1_d3 && d2_d3 <= d1_d2_d3){
        ans = d2_d3;
    }
    else{
        ans = d1_d2_d3;
    }

    std::cout << ans << std::endl;


    return 0;
}
