#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        
        int dist = s.size()+1, last = -1;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == 'R'){
                dist = s.size()-i;
                for(int j = 0; j <= i; j++){
                    if(s[j] == 'R' && j-last > dist) dist = j-last;
                    if(s[j] == 'R') last = j;
                }

                break;
            }
        }

        cout << dist << '\n';

    }




    return 0;
}
