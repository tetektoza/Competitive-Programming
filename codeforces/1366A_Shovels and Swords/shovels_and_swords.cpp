#include <bits/stdc++.h>

using namespace std;


int main(){

    int t;
    scanf("%d", &t);
    while(t--){
        long long a, b;
        scanf("%lld%lld", &a, &b);


        printf("%lld\n", min(min(a,b), (a+b)/3));

    }


    return 0;
}
