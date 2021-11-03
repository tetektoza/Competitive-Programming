#include <bits/stdc++.h>

using namespace std;


int main(){
    
    int a, b;
    scanf("%d%d", &a, &b);
    
    if(b == 1){
        printf("0\n");
        return 0;
    }

    int ans = 1;
    int cnt = a;
    while(cnt < b){
        cnt += (a-1);
        ans++; 
    }

    printf("%d\n", ans);


    return 0;
}
