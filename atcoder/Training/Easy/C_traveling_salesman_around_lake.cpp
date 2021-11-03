#include <bits/stdc++.h>


using namespace std;

int main(){
    const int mxn = 2e5;
    int n, k, a[mxn];
    
    scanf("%d%d", &k, &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int ans = k+1;

    for(int i = 1; i < n; i++){
        ans = min(ans, (k-a[i]) + a[i-1]);
    }


    ans = min(ans, a[n-1]-a[0]);
    
    printf("%d\n", ans);
}
