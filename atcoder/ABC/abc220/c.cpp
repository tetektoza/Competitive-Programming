#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){
    
    const int mxN = 1e5;

    ll n, a[mxN], x;

    cin >> n;
    
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    cin >> x;
    
    if(x <= sum){
        int cnt = 0, i = 0;
        ll sum = 0;
        while(true){
            sum += a[i];
            i++;
            cnt++;

            if(sum > x){
                printf("%d", cnt);
                break;
            }
        }

        return 0;
    }
    
    
    ll cnt = (x/sum)*n, sum_xi = (x/sum)*sum;
    int i = 0;
    while(sum_xi <= x){
        sum_xi += a[i];
        cnt++;
        i++;
    }

    printf("%lld", cnt);



    return 0;
}
