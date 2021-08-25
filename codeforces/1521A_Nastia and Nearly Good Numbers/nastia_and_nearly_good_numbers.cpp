#include <bits/stdc++.h>


using namespace std;


typedef long long ll;
int main(){

    int t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;

        if(b == 1) { cout << "NO" << '\n'; continue; }

        cout << "YES" << '\n';
        cout << a*b << " " << (a*b)+a << " " << (a*b) + (a*b)+a << '\n';


    }



}
