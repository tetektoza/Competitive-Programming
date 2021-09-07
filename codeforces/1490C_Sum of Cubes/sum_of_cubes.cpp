#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){


    int t;
    scanf("%d", &t);
    while(t--){

        ll x;
        scanf("%lld", &x);
        
        if(x <= 1){
            printf("NO\n");
            continue;
        }

        ll start = 1;
        ll cb, check_cb;
        int flag = 0;
        while(start*start*start < x){
            cb = start*start*start;
            check_cb = (ll)cbrt(x-cb);
            
            if(check_cb*check_cb*check_cb == x-cb){
                flag = 1;
                break;
            }

            start++;
        }

        (flag) ? printf("YES\n") : printf("NO\n");
    }



    return 0;
}
