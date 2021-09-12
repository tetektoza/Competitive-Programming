#include <bits/stdc++.h>

using namespace std;


int main(){
    
    const int mxN = 1e5;

    int n, a[mxN];

    scanf("%d", &n);
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] > ans){
            ans = a[i];
        }
    }
    
    printf("%d\n", ans);


    return 0;
}
