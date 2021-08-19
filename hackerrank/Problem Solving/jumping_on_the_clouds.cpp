#include <bits/stdc++.h>


using namespace std;


int main(){
    
    const int mxN = 1e2;
    int n, a[mxN];
    

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int ans = 0;
    for(int i = 0; i < n-1; i++){
        if(i+2 <= n-1 && a[i+2] == 0){
            i++;
            ans++;
            continue;
        }

        ans++;
   }

    cout << ans << '\n';

    return 0;
}
