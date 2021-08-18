#include <bits/stdc++.h>



using namespace std;


int main(){

    string s, t;
    cin >> s >> t;
    
    int k;
    cin >> k;
    

    
    int s_len = s.size(), t_len = t.size();
    int same = 0, flag = 0;
    for(int i = 0; i < s_len; i++){
        for(int j = 0; j < t_len; j++){
            if(s[i] == t[j] && t[j] != -1){
                same++; t[j] = -1;
                break;
            }

            if(s[i] != t[j] && t[j] != -1){
                flag = 1;
                break;
            }
        }
        
        if(flag)
            break;
    }

    int val = k-((s_len-same)+(t_len-same));
    if((val % 2 == 0 && val >= 0)
        || (same==0 && val >= 0)
        || ((k-s_len >= t_len) && (k-s_len) % 2 == 0)){
        cout << "Yes" << '\n';
    }
    else{
        cout << "No" << '\n';
    }

    return 0;
}
