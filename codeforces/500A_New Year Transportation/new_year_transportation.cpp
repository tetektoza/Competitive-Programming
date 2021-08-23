#include <bits/stdc++.h>


using namespace std;


typedef long long ll;
int main(){
    
    ll n, t;
    cin >> n >> t;
    
    vector<int> a(n-1);
    for(int i = 0; i < n-1; i++){
        cin >> a[i];
    }
    
    ll curr = 0, flag = 0;
    for(int i = 0; i < n; i++){
        if(curr+1 > t){
            break;
        }

        if(curr+1 == t){
            flag = 1;
            break;
        }

        curr += a[curr];
    }

    (flag) ? cout << "YES" << '\n' : cout << "NO" << '\n';

    return 0;
}
