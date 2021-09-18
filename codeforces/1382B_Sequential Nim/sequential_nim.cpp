#include <bits/stdc++.h>


using namespace std;

int main(){
    
    int t;
    scanf("%d", &t);
    while(t--){

        const int mxN = 1e5;

        int n, a[mxN];
        scanf("%d", &n);
        
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 1){
                ans++;
                continue;
            }

            break;
        }

        if(ans == n){
            (ans % 2 == 0) ? printf("Second\n") : printf("First\n");
            continue;
        }

        (ans % 2 == 0) ? printf("First\n") : printf("Second\n");

    }


    return 0;
}
