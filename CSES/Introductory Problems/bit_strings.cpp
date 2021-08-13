#include <bits/stdc++.h>
#define mod10_9 1000000007

using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    ll ans = 1;
    for(int i = 1; i <= n; i++){
        ans = (ans*2) % mod10_9;
    }
    
    cout << ans << '\n';


    return 0;
}
