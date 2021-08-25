#include <bits/stdc++.h>


using namespace std;


int main(){

    int t;
    cin >> t;
    while(t--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;


        vector<string> vec(n);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if((vec[i][j] == '.' && vec[i][j+1] == '.') && y < 2*x){
                    ans += y;
                    j++;
                }
                else if(vec[i][j] == '.'){
                    ans += x;
                }
            }
        }

        cout << ans << '\n';

    }


    return 0;
}
