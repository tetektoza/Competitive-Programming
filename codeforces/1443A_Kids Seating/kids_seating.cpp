#include <bits/stdc++.h>



using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;

        for(int i = 4*n; i > 4*n-n*2; i -= 2){
            cout << i << " ";
        }

        cout << endl;

    }


    return 0;
}
