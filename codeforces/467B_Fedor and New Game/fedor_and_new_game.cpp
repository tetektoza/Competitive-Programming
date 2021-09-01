#include <bits/stdc++.h>

using namespace std;

int main(){
    const int mxN = 1e3;
    int n, m, k, a[mxN];
    cin >> n >> m >> k;


    for(int i = 0; i < m+1; i++){
        cin >> a[i];
    }
    

    int typ, check, typ_fedor, typ_total;
    int ans = 0;
    for(int i = 0; i < m; i++){

        typ = 0, typ_fedor = 0, typ_total = 0, check = 1;
        
        for(int j = 1; j <= n; j++){
            if(a[i] & check) typ++;
            if(a[m] & check) typ_fedor++;
            if((a[m]&a[i]) & check) typ_total++;
            check <<= 1;
        }
        

        if(typ-typ_total + typ_fedor-typ_total <= k) ans++;
    }

    cout << ans << '\n';


    return 0;
}
