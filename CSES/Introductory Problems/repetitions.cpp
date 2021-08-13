#include <bits/stdc++.h>


using namespace std;

int main(){
    
    string s; cin >> s;

    char prev = s[0];
    int size = 1, max = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == prev){
            size++;
            prev = s[i];
        }
        else{
            if(size > max){
                max = size;
            }
            prev = s[i];
            size = 1;
        }
    }
    
    if(size > max){
        max = size;
    }

    cout << max << '\n';


    return 0;
}
