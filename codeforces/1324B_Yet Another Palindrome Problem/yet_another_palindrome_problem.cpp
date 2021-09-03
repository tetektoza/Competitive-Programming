#include <bits/stdc++.h>


using namespace std;


int main(){
    
    int t;
    scanf("%d", &t);
    while(t--){
        const int mxN = 5e3;

        int n, a[mxN];
        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        
        int flag = 0;
        for(int i = 0; i < n-2; i++){
            for(int j = i+2; j < n; j++){
                if(a[i] == a[j]){
                    flag = 1;
                    break;
                }
            }

            if(flag) break;
        }


        (flag) ? printf("YES\n") : printf("NO\n");



    }



    return 0;
}
