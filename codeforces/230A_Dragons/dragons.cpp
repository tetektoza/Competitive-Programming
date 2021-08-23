#include <bits/stdc++.h>


using namespace std;

int main(){


    int s, n;
    cin >> s >> n;

    
    vector<vector<int>> vec(n, vector<int> (2));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> vec[i][j];
        }
    }
    
    sort(vec.begin(), vec.end());
    
    int flag = 0;
    for(int i = 0; i < n; i++){
        if(vec[i][0] < s){
            s += vec[i][1];
        }
        else{
            flag = 1;
            break;
        }
    }

    if(!flag){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }

    return 0;
}
