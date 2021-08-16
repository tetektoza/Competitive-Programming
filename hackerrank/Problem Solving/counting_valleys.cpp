#include <bits/stdc++.h>

using namespace std;

int countingValleys(string s){
    
    int ans = 0, flag = 0, lvl = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'U'){
            lvl++;
        }
        else if(s[i] == 'D'){
            lvl--;
        }

        if(lvl < 0 && flag == 0){
            flag = 1;
            continue;
        }

        if(flag == 1 && lvl == 0){
            ans++;
            flag = 0;
        }
    }

    return ans;
}

int main(){
    
    int steps;
    string s;
    cin >> steps >> s;

    auto ans = countingValleys(s);

    cout << ans << '\n';


    return 0;
}
