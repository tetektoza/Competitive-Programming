#include <bits/stdc++.h>


using namespace std;

int getMoneySpent(int a[], int b[], int budg, int n, int m){
    
    int ans = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] + b[j] > ans && budg-(a[i]+b[j]) >= 0){
                ans = a[i]+b[j];
            }
        }
    }

    return ans;
}


int main(){
    
    const int mxN = 1e3;
    int budg, n, m, a[mxN], b[mxN];
    
    cin >> budg >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    
    auto ans = getMoneySpent(a, b, budg, n, m);

    cout << ans << '\n';

    return 0;
}
