#include <bits/stdc++.h>


using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        if(n == 2){
            cout << -1 << '\n';
            continue;
        }
        
        const int mxN = 1e4;
        int a[mxN];

        int in = 0;
        for(int i = 1; i <= n*n; i += 2) a[in++] = i;
        for(int i = 2; i <= n*n; i += 2) a[in++] = i;
        
        in = 0;
        for(int i = 0; i < n*n; i++){
            cout << a[i] << " ";
            in++;

            if(in == n){
                cout << '\n';
                in = 0;
            }
        }
            
    }

    return 0;
}
