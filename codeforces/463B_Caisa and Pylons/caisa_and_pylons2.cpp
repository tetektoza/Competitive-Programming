//second solution to this problem, more implementation-wise 

#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    
    const int mxN = 1e5;
 
    int n, a[mxN];
 
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    int ans = a[0];
    for(int k = 0; k < n-1; k++){
        if(ans < a[k+1]){
            ans += a[k+1]-ans;
        }
 
    }
    
    printf("%d\n", ans);
 
 
    return 0;
}
