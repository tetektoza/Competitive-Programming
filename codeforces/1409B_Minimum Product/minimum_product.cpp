#include <bits/stdc++.h>


using namespace std;

typedef long long ll;
int main(){

    int t;
    scanf("%d", &t);
    while(t--){
        ll a, b, x, y, n;
        scanf("%lld %lld %lld %lld %lld", &a, &b, &x, &y, &n);


        ll a_border = a-x, b_border = b-y;
        ll min_a_border = min(a_border,n), min_b_border = min(b_border,n);
        ll min_a_bord_sub = min(b_border, n-min_a_border), min_b_bord_sub = min(a_border, n-min_b_border);
        ll min_first = min((a-min_a_border)*(b-min_a_bord_sub), (a-min_b_bord_sub)*(b-min_b_border));
        
        printf("%lld\n", min_first);
    }




    return 0;
}
