#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin >> t;
    while(t--){
        string st;
        cin >> st;
        
        int indone = -1, indzero = -1;    
        for(int i = 0; i < st.size() && (indone < 0 || indzero < 0); i++){
            if(st[i] == '1'){
                indone = i;
            }
            else{
                indzero = i;
            }
        }

        if(indone < 0){
            indone = indzero;
        }
        else if(indzero < 0){
            indzero = indone;
        }

        string ans = "";

        for(int i = 0; i < st.size()*2; i++){

            (i % 2 == 0) ? ans += st[indzero] : ans += st[indone];

        }

        
        cout << ans << '\n';


    }


    return 0;
}
