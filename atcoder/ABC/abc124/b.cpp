#include <bits/stdc++.h>

using namespace std;


int main(){
    const int mxN = 1e2;
    int n, a[mxN];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    int ans = 1, max = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] >= max){
            max = a[i];
            ans++;
        }
    }

    printf("%d\n", ans);



    return 0;
}
