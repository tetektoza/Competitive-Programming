#include <bits/stdc++.h>

using namespace std;

int main(){

    string a;
    cin >> a;

    int ans = 0;
    for(int i = 1; i < a.size(); i++){
        if(a[i] == '0'){
            if(a[i-1] != '1'){
                a[i] = '1';
                ans++;
            }
        }
        if(a[i] == '1'){
            if(a[i-1] != '0'){
                a[i] = '0';
                ans++;
            }
        }

    }
    
    printf("%d\n", ans);


    return 0;
}
