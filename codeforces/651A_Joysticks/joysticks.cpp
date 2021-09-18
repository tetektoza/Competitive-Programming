#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a1, a2;
    scanf("%d%d", &a1, &a2);
    
    int ans = 0;
    while((a1 >= 1 && a2 >= 2) || (a1 >= 2 && a2 >= 1)){
        ans++;
        if(a1 >= a2){
            a2++;
            a1 -= 2;
        }
        else{
            a2 -= 2;
            a1++;
        }

    }

    printf("%d", ans);


    return 0;
}
