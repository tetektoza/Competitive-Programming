#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin >> t;

    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        int jokers_max = min(n/k, m);

        int jok_rem = m-jokers_max, max_rem_cards;
        (jok_rem % (k-1) != 0) ? max_rem_cards = (jok_rem/(k-1))+1 : max_rem_cards = jok_rem/(k-1);

        cout << jokers_max - max_rem_cards << '\n';
    }

    return 0;
}
