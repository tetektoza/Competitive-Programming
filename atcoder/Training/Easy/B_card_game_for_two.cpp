#include <bits/stdc++.h>


using namespace std;


int main(){
    const int mxn = 1e2;

    int n, a[mxn];
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    sort(a, a+n, greater<int>());
    
    int al = 0, bob = 0;
    for(int i = 0; i < n; i++){
        (i % 2 == 0) ? al += a[i] : bob += a[i];
    }

    printf("%d\n", al-bob);

    return 0;
}
