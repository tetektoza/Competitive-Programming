#include <bits/stdc++.h>


using namespace std;

typedef long long ll;
int main(){
        
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        ll ans = 0, mid = n/2;
        while(n > 1){
            ans += (n*2 + (n-2)*2)*mid;
            mid--;
            n -= 2;
        }

        cout << ans << '\n';


    }


    return 0;
}
