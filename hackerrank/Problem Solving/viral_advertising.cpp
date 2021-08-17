#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n){
    
    int shared = 5, cum = 2, liked = 2;
    for(int i = 1; i < n; i++){
        shared = (shared/2)*3;
        liked = shared/2;
        cum += liked;
    }

    return cum;
}


int main(){

    int n;
    cin >> n;

    auto ans = viralAdvertising(n);

    cout << ans << '\n';

    return 0;
}
