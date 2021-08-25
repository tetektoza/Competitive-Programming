#include <bits/stdc++.h>


using namespace std;

int main(){

    int n;
    cin >> n;
    
    int ans = n, curr = 2;
    for(int i = 1; i < n; i++){
        ans += (n - i - 1) * curr + 1;
        curr++;
    }

    cout << ans << '\n';

    return 0;
}
