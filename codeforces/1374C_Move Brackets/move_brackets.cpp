#include <bits/stdc++.h>


using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        int n;
        cin >> n >> s;
        

        int ans = 0;
        int cnt = 0;  
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                cnt++;
            }
            else{
                cnt--;
            }

            if(cnt < 0){
                ans++;
                cnt = 0;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
