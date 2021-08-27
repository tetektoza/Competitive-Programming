#include <bits/stdc++.h>


using namespace std;



int main(){

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        vector<vector<char>> vec(n, vector<char>(m, 'B'));
        vec[0][0] = 'W';

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << vec[i][j];
            }

            cout << '\n';
        }

    }



    return 0;
}
