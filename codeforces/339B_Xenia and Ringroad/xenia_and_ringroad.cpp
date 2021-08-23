#include <bits/stdc++.h>


using namespace std;

typedef long long ll;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    
    cin >> n >> m;
    ll ans = 0, prev = 1;
    for(int i = 0; i < m; i++){

        ll a;
        cin >> a;

        if(prev > a){
            ans += (n-prev) + a;
        }
        else{
            ans += (a - prev);
        }

        prev = a;
    }
    
    cout << ans << '\n';

    return 0;
}
