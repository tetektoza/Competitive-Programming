#include <bits/stdc++.h>


using namespace std;

typedef long long ll;

ll saveThePrisoner(ll n, ll m, ll s){
    
    ll ans;
    if(s+(m-1) >= n){
        ll val = m-(abs(s-n)+1);
        if(val % n == 0){
            ans = n;
        }
        else{
            ans = val%n;
        }
    }
    else{
        ans = s+(m-1);
    }

    return ans;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        ll n, m, s;
        cin >> n >> m >> s;

        auto ans = saveThePrisoner(n, m, s);

        cout << ans << '\n';
    }



    return 0;
}
