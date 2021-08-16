#include <bits/stdc++.h>


using namespace std;

int pickingNumbers(int a[], int n){
    
    int ans = 0, prev = a[0], curr = 1;
    for(int i = 1; i < n; i++){
        if(abs(a[i]-prev) > 1){
            prev = a[i];
            curr = 1;
        }
        else{
            curr++;
        }

        if(curr > ans){
            ans = curr;
        }
    }

    return ans;
}

int main(){

    const int mxN = 1e2;

    int n, a[mxN];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    sort(a, a+n);

    auto ans = pickingNumbers(a, n);
    
    cout << ans << '\n';

    return 0;
}
