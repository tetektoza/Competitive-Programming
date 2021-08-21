#include <bits/stdc++.h>


using namespace std;


int main(){

    string s;
    cin >> s;

    string ans = "";
    string hello = "hello";

    int size = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == hello[size]){
            ans += s[i];
            size++;
        }
    }
    
    if(ans == "hello"){
        cout << "YES" << '\n';
        return 0;
    }

    cout << "NO" << '\n';
    return 0;
}
