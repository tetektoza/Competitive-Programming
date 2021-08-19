#include <bits/stdc++.h>

using namespace std;


int main(){

    const int mxN = 1e4;
    int n, d, a[mxN];
    cin >> n >> d;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(abs(a[i]-a[j]) == d){
                for(int k = j+1; k < n; k++){
                    if(abs(a[j]-a[k]) == d){
                        cnt++;
                        break;
                    }
                }
                break;
            }
        }
    }

    cout << cnt << '\n';

    return 0;
}
