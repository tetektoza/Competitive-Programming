#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        const int mxN = 1e5;


        int n, a[mxN];
        scanf("%d", &n);
            
        int pairs = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);

            if(a[i] <= 0) pairs++;
        }
        
        sort(a, a+n);
        
        
        int max = 0, flag = 0;
        for(int i = 0; i < n; i++){
            if(a[i] > 0){
                max = a[i];
                flag = 1;
                break;
            }
        }
        
        for(int i = 1; i < n; i++){
            if(!flag) break;

            if(a[i] <= 0) (abs(a[i-1]-a[i]) < max) ? flag = 0 : flag = 1;
            else break;

        }

        (flag) ? printf("%d\n", pairs+1) : printf("%d\n", pairs);
    }








    return 0;
}
