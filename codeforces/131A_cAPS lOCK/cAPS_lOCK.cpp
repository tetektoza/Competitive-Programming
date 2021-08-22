#include <bits/stdc++.h>


using namespace std;


int main(){

    string s;
    cin >> s;
    
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if((int)s[i] < 97){
            cnt++;
        }
    }

    if(cnt == s.length() || ((int)s[0] >= 97 && cnt == s.length()-1)){
        for(int i = 0; i < s.length(); i++)
            (s[i] >= 'a') ? s[i] = (char)(s[i] - 32) : s[i] = (char)(s[i] + 32);

        cout << s << '\n';
        return 0;
    }
    

    cout << s << '\n';

    return 0;
}
