#include <bits/stdc++.h>


using namespace std;

typedef long long ll;
int main(){
    
    int k;
    string a, b;

    cin >> k >> a >> b;
    
    ll l = int(a[a.size()-1] - 48), pows = k;
    for(int i = a.size()-2; i >= 0; i--){
        l += int(a[i]-48) * pows;
        pows *= k;
    }
    

    ll r = int(b[b.size()-1] - 48);
    pows = k;
    for(int i = b.size()-2; i >= 0; i--){
        r += int(b[i]-48) * pows;
        pows *= k;
    }

    printf("%lld", l*r);

    return 0;
}
