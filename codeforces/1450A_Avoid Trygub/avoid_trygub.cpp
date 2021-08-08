#include <bits/stdc++.h>



using namespace std;


int main(){
    
    int t; cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        string tmp = "";
        string ans = "";
        for(int i = 0; i < n; i++){
            if(s[i] == 't'){
                tmp += s[i];
                continue;
            }

            ans += s[i];
        }

        ans += tmp;


        cout << ans << endl;
        
    }

    return 0;
}
