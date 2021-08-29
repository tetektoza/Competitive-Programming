#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        vector<string> vec(9);

        for(int i = 0; i < 9; i++){
            cin >> vec[i];
        }
        
        int cnt = 0, tmp = 0; 
        for(int i = 0; i < 9; i++){
            if(i % 3 == 0 && i != 0){
                tmp += 1;
                cnt = tmp;
            }

            (vec[i][cnt] == '9') ? vec[i][cnt] = '1' : vec[i][cnt] += 1;
            cnt += 3;
        }
        
        for(int i = 0; i < 9; i++){
            cout << vec[i] << '\n';
        }

    }

    return 0;
}
