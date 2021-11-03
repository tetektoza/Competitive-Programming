#include <bits/stdc++.h>

using namespace std;


int main(){
    
    
    int n, k;

    scanf("%d%d", &n, &k);
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);

        sum += min(2*a, (k-a)*2);
    }
    
    printf("%d\n", sum);

    

    return 0;

}
