#include <bits/stdc++.h>


using namespace std;


int main(){


    int t;
    scanf("%d", &t);
    while(t--){
        const int mxN = 1e5;

        int n, a[mxN], b[mxN];

        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }

        for(int i = 0; i < n; i++){
            scanf("%d", &b[i]);
        }
        
        int flag = 0, flag_pl = 0, flag_min = 0;
        int ones = 0, minuses = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == b[i]) continue;
            if(flag_pl && flag_min) break;

            flag = 1;

            if(a[i] < b[i]){
                if(ones){
                    flag = 0;
                    flag_pl = 1;
                    continue;
                }

                for(int j = 0; j < i; j++){
                    if(a[j] == 1){
                        ones = 1;
                        flag = 0;
                        break;
                    }
                }
            }
            else{
                if(minuses){
                    flag = 0;
                    flag_min = 1;
                    continue;
                }

                for(int j = 0; j < i; j++){
                    if(a[j] == -1){
                        minuses = 1;
                        flag = 0;
                        break;
                    }
                }
            }

            if(flag) break;
        }
        

        (!flag) ? printf("YES\n") : printf("NO\n");
    }




    return 0;
}
