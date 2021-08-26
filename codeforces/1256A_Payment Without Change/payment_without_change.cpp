#include <bits/stdc++.h>


using namespace std;


int main(){
    int q;
    cin >> q;
    while(q--){
        int a, b, n, S;
        cin >> a >> b >> n >> S;
        
        int numa = min(S/n, a);
        ((a*n >= S && S%n == 0)
        || b >= S
        || (a >= numa && S-(numa*n) <= b))
        ? cout << "YES" << '\n' : cout << "NO" << '\n';   

    }

    return 0;
}
