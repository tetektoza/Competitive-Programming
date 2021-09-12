#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        
        int minval = min(min(a,b), c);
        if((a+b+c) % 9 != 0){
            printf("NO\n");
        }
        else if(minval >= (a+b+c)/9){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
    }




    return 0;
}
