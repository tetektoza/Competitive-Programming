#include <bits/stdc++.h>


using namespace std;


int main(){
    
    int n;
    scanf("%d", &n);

    int ans = 1;

    while(ans << 1 <= n){
        ans <<= 1;
    }

    printf("%d\n", ans);
    

    return 0;
}
