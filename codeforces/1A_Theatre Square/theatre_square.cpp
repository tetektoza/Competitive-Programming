#include <bits/stdc++.h>


using namespace std;

typedef long long ll;

int main(){
    
    ll n, m, a;

    cin >> n >> m >> a;
    
    ll muln = n/a, mulm = m/a;
    if(n%a != 0){
        muln++;
    }
    
    if(m % a != 0){
        mulm++;
    }

    ll ans = muln*mulm;

    cout << ans << '\n';

    return 0;
}
