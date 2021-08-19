#include <bits/stdc++.h>


using namespace std;


int main(){
    
    int n, m;
    cin >> n >> m;
    
    vector<string> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int max = 0, teams_best = 1, cnt_ones;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            cnt_ones = 0;
            for(int x = 0; x < m; x++){

                if((a[j][x] | a[i][x])-48){
                    cnt_ones++;
                }
            }

            if(cnt_ones > max){
                max = cnt_ones;
                teams_best = 1;
            }
            else if(cnt_ones==max){
                teams_best++;
            }
        }
    }
    
    cout << max << '\n';
    cout << teams_best << '\n';

    return 0;
}
