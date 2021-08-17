#include <bits/stdc++.h>

using namespace std;


int utopianTree(int n){
    
    int ans = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            ans *= 2;
        }
        else{
            ans++;
        }
    }


    return ans;
}



int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        auto ans = utopianTree(n);

        cout << ans << '\n';
    }


    return 0;
}
