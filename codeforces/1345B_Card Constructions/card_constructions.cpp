#include <bits/stdc++.h>


using namespace std;

typedef long long ll;

int main(){
    
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        
        ll base = 0, ans = 0, prev = 0;
        ll sum = 0;
        while(n > 1){
            prev += (base/2)*3;
            base += 2;
            sum = prev + base;
            if(prev+((base/2)*3) + base+2 > n){
                n -= sum;
                
                prev = 0, base = 0;
                ans++;
            }

        }

        printf("%lld\n", ans);

    }



    return 0;
}
