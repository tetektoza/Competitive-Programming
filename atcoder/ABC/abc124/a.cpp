#include <bits/stdc++.h>

using namespace std;


int main(){
    int a, b;
    scanf("%d%d", &a, &b);


    int ans = max(a+b, max(a+a-1, b+b-1));
        
    printf("%d\n", ans);


    return 0;
}
