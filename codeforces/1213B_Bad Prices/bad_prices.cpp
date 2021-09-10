#include <bits/stdc++.h>


using namespace std;


int main(){
    
    int t;
    scanf("%d", &t);
    while(t--){
        const int mxN = 15e4;

        int n, a[mxN];
        scanf("%d", &n);
        
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        
        int ans = 0;
        int min_num = a[n-1];
        
        for(int i = n-2; i >= 0; i--){
            (a[i] > min_num) ? ans++ : min_num = a[i];
        }
        
        printf("%d\n", ans);


    }



    return 0;
}
