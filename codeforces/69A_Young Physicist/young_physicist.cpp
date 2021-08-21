#include <bits/stdc++.h>


using namespace std;


int main(){


    int n;
    cin >> n;
    
    vector<vector<int>> vec(n, vector<int> (3));    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> vec[i][j];
        }
    }
    
    int flag = 0, sum_one_dim;
    for(int i = 0; i < 3; i++){
        sum_one_dim = 0;
        for(int j = 0; j < n; j++){
            sum_one_dim += vec[j][i];
        }

        if(sum_one_dim != 0){
            flag = 1;
            break;
        }
    }
    

    if(flag){
        cout << "NO" << '\n';
        return 0;
    }


    cout << "YES" << '\n';

    return 0;
}
