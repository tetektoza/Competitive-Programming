#include <bits/stdc++.h>


using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;
    while(t--){
        
        const int mxN = 1e5;
        int n, a[mxN];
        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        sort(a, a+n);


        int ans = n;
        for(int i = n-1; i >= 0; i--){
            if(a[i] > ans){
                ans--;
            }
            else{
                break;
            }
        }

        cout << ans+1 << '\n';
    }

    return 0;
}
