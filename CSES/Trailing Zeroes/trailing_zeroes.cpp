#include <bits/stdc++.h>



using namespace std;


int main(){

    int n; cin >> n;

    int moves = 0;

    while(n > 0){
        n /= 5;
        moves += n;
    }

    cout << moves << '\n';


    return 0;
}
