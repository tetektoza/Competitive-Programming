#include <bits/stdc++.h>

using namespace std;
int main(){
    
    string s, t;
    cin >> s >> t;
        
    int tmp;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != t[i]){
            tmp = s[i];
            s[i] = s[i+1];
            s[i+1] = tmp;
            break;
        }
    }
    
    (s==t) ? printf("Yes\n") : printf("No\n");

    return 0;
}
