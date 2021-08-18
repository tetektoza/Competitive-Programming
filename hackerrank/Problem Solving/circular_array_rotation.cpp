#include <bits/stdc++.h>


using namespace std;



int main(){

    const int mxN = 1e5;
    int n, k, q, a[mxN];

    cin >> n >> k >> q;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    while(q--){
        int val;
        cin >> val;
        int ind = ((n-1)-((k-1))%n+val)%n;

        cout << a[ind] << '\n';
    }

    return 0;
}
