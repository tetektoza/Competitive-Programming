#include <bits/stdc++.h>


using namespace std;


int main(){
    
    const int mxN = 1e2;

    int n, a[mxN];
    scanf("%d", &n);
    
    int maxval = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] > maxval){
            maxval = a[i];
        }
    } 
    
    int ans = 1e6, sum = 0;
    for(int i = 0; i <= maxval; i++){
        sum = 0;
        for(int j = 0; j < n; j++){
            sum += (a[j]-i)*(a[j]-i);
        }

        ans = min(sum, ans);

    }
    
    printf("%d\n", ans);

    return 0;
}
