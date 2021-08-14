#include <bits/stdc++.h>


using namespace std;

int divisibleSumPairs(int n, int arr[], int k){

    int ans = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if((arr[i]+arr[j])%k == 0){
                ans++;
            }
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

    auto ans = divisibleSumPairs(n, a, k);

    cout << ans << '\n';

    return 0;
}
