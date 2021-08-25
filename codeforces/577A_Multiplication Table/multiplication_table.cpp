#include <bits/stdc++.h>


using namespace std;

typedef long long ll;

int main(){

    ll n, x;
    cin >> n >> x;
    
    int ans = 0;
    for(int i = 1; i <= min(n, x); i++){
        if(x % i == 0 && i*n >= x){
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}
