#include <bits/stdc++.h>


using namespace std;


int main(){

    int n;
    cin >> n;
    
    
    string f_team, s_team;
    int f_score = 0, s_score = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(i == 0){ f_team = s; f_score++; continue; }

        if(s != f_team){
            s_team = s;
            s_score++;
        }
        else{
            f_score++;
        }

    }

    (f_score > s_score) ? cout << f_team << '\n' : cout << s_team << '\n';

    return 0;
}
