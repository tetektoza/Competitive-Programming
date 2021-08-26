#include <bits/stdc++.h>


using namespace std;

typedef long long ll;
int main(){
    int q;
    cin >> q;
    while(q--){
        ll a, b, n, S;
        cin >> a >> b >> n >> S;
        
        ll numa = min(S/n, a);
        ((a*n >= S && S%n == 0) || b >= S || (a >= numa && S-(numa*n) <= b))
        ? cout << "YES" << '\n' : cout << "NO" << '\n';   

    }

    return 0;
}
