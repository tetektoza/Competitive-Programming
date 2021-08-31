#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        
        (n >= k*k && (n-k) % 2 == 0) ? printf("YES\n") : printf("NO\n");    
    }


    return 0;
}
