#include <bits/stdc++.h>

using namespace std;


int bonAppetit(int n, int k, int bill[], int b){
    int sum_anna = 0;
    for(int i = 0; i < n; i++){
        if(i == k){
            continue;
        }

        sum_anna += bill[i];
    }

    if(sum_anna/2 == b){
        cout << "Bon Appetit" << '\n';
        return -1;
    }

    return b-(sum_anna/2);
    
}


int main(){
    
    const int mxN = 1e5;
    int n, k, bill[mxN], b;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> bill[i];
    }

    cin >> b;

    auto ans = bonAppetit(n, k, bill, b);
    
    if(ans > -1){
        cout << ans << '\n';
    }

    return 0;
}
