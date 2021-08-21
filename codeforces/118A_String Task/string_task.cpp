#include <bits/stdc++.h>


using namespace std;

int main(){
    string s;
    cin >> s;

    string ans = "";
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'A'|| s[i] == 'a'
            || s[i] == 'O' || s[i] == 'o'
            || s[i] == 'Y' || s[i] == 'y'
            || s[i] == 'E' || s[i] == 'e'
            || s[i] == 'U' || s[i] == 'u'
            || s[i] == 'I' || s[i] == 'i'){

            continue;
        }

        if((int)s[i] < 97){
            ans += '.';
            ans += (char)(s[i] + ' ');
            continue;
        }
        
        ans += '.';
        ans += s[i];
    }

    cout << ans << '\n';

    return 0;
}
