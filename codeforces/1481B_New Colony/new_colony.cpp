#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        const int mxN = 1e2;

        int n, k, a[mxN];

        scanf("%d%d", &n, &k);
        

        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        
        
        int flag, curr_pos;
        while(k > 0){
            flag = 0;
            for(int i = 0; i < n-1; i++){
                if(a[i+1] > a[i]){
                    k--;
                    a[i]++;
                    curr_pos = i;
                    flag = 1;
                    break;
                }
            }

            if(!flag) break;
        }
        

        (!flag) ? printf("-1\n") : printf("%d\n", curr_pos+1);
    }





}
