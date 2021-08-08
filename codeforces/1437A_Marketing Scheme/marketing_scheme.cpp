#include <bits/stdc++.h>



using namespace std;



int main(){
    
    int t; cin >> t;

    while(t--){
        int l, r;
        cin >> l >> r;

        if(l < (float)(r+1)/2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }


    }



    return 0;
}
