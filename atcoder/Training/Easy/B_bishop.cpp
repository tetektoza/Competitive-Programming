#include <bits/stdc++.h>

using namespace std;


int main(){

    long long h, w;
    scanf("%lld%lld", &h, &w);
    
    if(h == 1 || w == 1){
        printf("1");
        return 0;
    }

    long long odd, ev;
    if(w % 2 == 0){
        odd = w/2; ev = w/2;
    }
    else{
        odd = (w+1)/2; ev = w/2;
    }
    
    (h % 2 == 0)
    ? printf("%lld", (h/2)*odd + (h/2)*ev)
    : printf("%lld", ((h+1)/2)*odd + h/2*ev);


    return 0;
}
