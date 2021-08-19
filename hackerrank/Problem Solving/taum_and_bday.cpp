#include <bits/stdc++.h>



using namespace std;


typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll b, w, bc, wc, z;

        cin >> b >> w >> bc >> wc >> z;
        
        ll ans;
        if(wc > bc && wc >= z+bc){
            ans = (bc*b) + (bc*w) + z*w;
        }
        else if(wc < bc && bc >= z+wc){
            ans = (wc*w) + (wc*b) + z*b;
        }
        else{
            ans = (wc*w) + (bc*b);
        }
    
        cout << ans << endl;
    }



    return 0;
}
