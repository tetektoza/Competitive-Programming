#include <bits/stdc++.h>

using namespace std;



int main(){
    
    int a, b;
    cin >> a >> b;

    int ans = 0, div = a, rem = 0;
    while(div + rem >= b){
        ans += div;
        rem += div;

        div = rem/b;
        rem = rem % b;

    }
    
    cout << ans+div << '\n';

    return 0;
}
