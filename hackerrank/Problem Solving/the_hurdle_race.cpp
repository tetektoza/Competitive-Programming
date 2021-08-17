#include <bits/stdc++.h>



using namespace std;

int hurdleRace(int k, int a[], int n){
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > k){
            ans += a[i]-k;
            k = a[i];
        }
    }

    return ans;
}


int main(){ 
    
    const int mxN = 1e2;
    int n, k, a[mxN];
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }


    auto ans = hurdleRace(k, a, n);

    cout << ans << '\n';


    return 0;
}
