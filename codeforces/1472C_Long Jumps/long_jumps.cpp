#include <bits/stdc++.h>


using namespace std;


typedef long long ll;
int main(){
    
    int t;
    scanf("%d", &t);
    while(t--){
        const int mxN = 2e5;
        int n, a[mxN];
        scanf("%d", &n);

        for(int i = 1; i <= n; i++){
            scanf("%d", &a[i]);
        }
        
        ll ans = 0;
        for(int i = n; i >= 1; i--){
            if(i+a[i] <= n){
                a[i] += a[i+a[i]];
            }
            
            if(a[i] > ans) ans = a[i];
        }

        printf("%lld\n", ans);


    }




    return 0;
}
