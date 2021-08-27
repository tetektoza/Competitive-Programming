#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;


        if(n == 1){
            cout << k << '\n';
            continue;
        }

        if(n % k == 0) cout << 1 << '\n';
        else if(k % n == 0) cout << k/n << '\n';
        else if(k % n != 0 && k > n) cout << (k/n)+1 << '\n';
        else cout << 2 << '\n';
    

    }


    return 0;
}
