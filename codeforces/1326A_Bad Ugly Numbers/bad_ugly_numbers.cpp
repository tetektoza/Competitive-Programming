#include <bits/stdc++.h>


using namespace std;


int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        if(n == 1){
            cout << -1 << '\n';
            continue;
        }

        string ans = "2";
        for(int i = 0; i < n-1; i++){
            ans += '3';
        }

        cout << ans << '\n';

    }


    return 0;
}
