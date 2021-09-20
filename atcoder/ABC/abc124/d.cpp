#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    string a;
    cin >> n >> k >> a;

    vector<pair<char,int>> vec;
    int cnt = 1;
    char prev = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] != prev){
            vec.push_back({prev, cnt});
            cnt = 1;
            prev = a[i];
            continue;
        }

        cnt++;
    }
    
    vec.push_back({prev, cnt});
    
    int sum = 0, ans = 0, pnt = 0;
    for(int i = 0; i < vec.size(); i++){
        sum += vec[i].second;
        if(vec[i].first == '0') k--;

        if(k == -1){
            for(int j = pnt; k < 0; j++){
                sum -= vec[j].second;
                if(vec[j].first == '0') k++;
                pnt++;
            }
        }

        ans = max(ans, sum);
    }

    cout << ans << '\n';

    return 0;
}
