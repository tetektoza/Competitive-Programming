#include <bits/stdc++.h>


using namespace std;

typedef long long ll;
int main(){

    int t;
    scanf("%d", &t);
    while(t--){
        
        vector<int> a(3), b(3);

        for(int i = 0; i < 3; i++){
            scanf("%d", &a[i]);
        }

        for(int i = 0; i < 3; i++){
            scanf("%d", &b[i]);
        }
        
        ll ans = min(a[2], b[1])*2;
        a[2] -= min(a[2], b[1]);
        if(b[2] >= a[0]) b[2] -= a[0];
        else if(b[2] < a[0]) b[2] = 0;

        if(b[2] >= a[2]) b[2] -= a[2];
        else if(b[2] < a[2]) b[2] = 0;        
        
        ans -= b[2]*2;
        
        printf("%lld\n", ans);

    }



    return 0;
}
