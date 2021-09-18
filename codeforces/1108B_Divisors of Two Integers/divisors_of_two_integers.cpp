#include <bits/stdc++.h>

using namespace std;


int main(){
    
    const int mxN = 1e4;

    int n, a[mxN];
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    sort(a, a+n);
    
    int div;
    for(int i = n-1; i >= 1; i--){
        if(a[i] == a[i-1]){
            div = a[i];
            break;
        }
    }

    int x = 1, y = 1;
    for(int i = n-1; i >= 2; i--){
        if(a[i] % div == 0){
            x = a[i];
            for(int j = i-1; i >= 2; i--){
                if(x % a[i] != 0 || a[i] == a[i+1]){
                    y = a[i];
                    break;
                }
            }

            break;
        }
    }

    printf("%d %d", x, y);

    return 0;
}
