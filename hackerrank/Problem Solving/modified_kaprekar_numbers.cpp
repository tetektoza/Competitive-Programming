#include <bits/stdc++.h>


using namespace std;

typedef long long ll;

int main(){
    int p, q;
    cin >> p >> q;
    
    
    int digits, cnt = 0;
    ll power, r,l, div;
    vector<int> ans;
    for(ll i = p; i <= q; i++){
        digits = i; cnt = 0;
        while(digits > 0){
            cnt++;
            digits/=10;
        }
        
        power = i*i;
        div = pow(10,cnt);
        r = power%div;
        l = power/div;

        if(r+l == i){
            ans.push_back(i);
        }

    }

    if(ans.size()==0){
        cout << "INVALID RANGE";
    }
    else{
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
    }
    
    cout << '\n';

}
