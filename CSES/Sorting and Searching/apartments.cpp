#include <bits/stdc++.h>


using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    const int mxN = 2e5;
    int n,m,k, des_size[mxN], apart_size[mxN];
    cin >> n >> m >> k;
    
    for(int i = 0; i < n; i++)
        cin >> des_size[i];
    
    for(int i = 0; i < m; i++)
        cin >> apart_size[i];
    
    sort(des_size, des_size+n);
    sort(apart_size, apart_size+m);

    int ans = 0, tp = 0;
    for(int i = 0; i < n; i++){
        for(int j = tp; j < m; j++){
            if(apart_size[j]<des_size[i]-k){
                tp++; continue;
            }

            if(apart_size[j] <= des_size[i]+k){
                ans++, tp++; break;
            }

            if(apart_size[j] > des_size[i]+k)
                break;
        }
    }

    cout << ans << '\n';
    
    return 0;
}
