#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    
    ll n;
    string s;
    cin >> s >> n;
    
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a'){
            cnt++;
        }
    }
        
    ll times = n/s.size();
    ll ans = times*cnt;


    for(int i = 0; i < n%s.size(); i++){
        if(s[i] == 'a'){
            ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}
