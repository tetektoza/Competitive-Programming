#include <bits/stdc++.h>


using namespace std;

typedef long long ll;
int main(){
    
    int t;
    scanf("%d", &t);
    while(t--){
        const int mxN = 1e5;

        int n, x, a[mxN];
        scanf("%d%d", &n, &x);

        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        
        sort(a, a+n, greater<int>());

        if(a[0] < x){
            printf("0\n");
            continue;
        }

        ll ans = 1, sum = a[0], cnt = 1;
        for(int i = 1; i < n; i++){
            if((sum+a[i])/(cnt+1) >= x){
                cnt++; ans++;
                sum += a[i];
                continue;
            }

            break;
            
        }

        printf("%d\n", ans);

    }


    return 0;
}
