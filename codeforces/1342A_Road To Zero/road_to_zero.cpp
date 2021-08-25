#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        
        ll min_xy = min(x,y);

        ll ans = abs(x-y)*a;

        (a*2 > b) ? ans += min_xy*b : ans += (min_xy*a)*2;

        cout << ans << '\n';
        


    }


}
