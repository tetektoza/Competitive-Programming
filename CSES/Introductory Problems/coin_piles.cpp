#include <bits/stdc++.h>



using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;

        if((a+b) % 3 == 0 && abs(a-b) <= max(a,b)/2){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }



    return 0;
}
