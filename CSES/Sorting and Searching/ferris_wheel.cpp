#include <bits/stdc++.h>


using namespace std;



int main(){
    const int mxN = 2e5;

    int n, x, p[mxN];

    cin >> n >> x;

    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    
    sort(p, p+n);

    int ans = 0, tp = n-1;
    for(int i = 0; i < n; i++){
        if(p[i] > (x-p[i])){
            break;
        }

        for(int j = tp; j > i; j--){
            if(p[i]+p[j] <= x){
                ans++; tp=j-1;
                break;
            }
        }
    }

    cout << n-ans << '\n';

    return 0;
}
