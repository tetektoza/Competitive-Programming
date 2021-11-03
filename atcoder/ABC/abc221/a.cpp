#include <bits/stdc++.h>

using namespace std;
int main(){ 
    int a, b;
    scanf("%d%d", &a, &b);

    int diff = max(a, b) - min(a, b);

    int mul = 1, cnt = 1;
    while(cnt <= diff){
        mul *= 32;
        cnt++;
    }

    printf("%d", mul);

    return 0;
}
