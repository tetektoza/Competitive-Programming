#include <bits/stdc++.h>


using namespace std;

int sockMerchant(int n, int socks[]){
    
    vector<int> vars(100);
    for(int i = 0; i < n; i++){
        vars[socks[i]-1]++;
    }
    
    int ans = 0;
    for(int i = 0; i < 100; i++){
        if(vars[i] > 0){
            if(vars[i] % 2 == 0){
                ans += vars[i]/2;
            }
            else{
                ans += (vars[i]-1)/2;
            }
        }
    }

    return ans;
}


int main(){
    
    const int mxN = 1e2;
    int n, a[mxN];
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    auto ans = sockMerchant(n, a);

    cout << ans << '\n';

    return 0;
}
