#include <bits/stdc++.h>


using namespace std;



int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;

        vector<int> vec;
        for(int i = 0; i < n; i++){
            if(s[i] == '*') vec.push_back(i);
        }
        

        int ans = 1;
        if(vec.size() >= 2) ans++;

        int last_ind = vec[0];
        for(int i = 1; i < vec.size(); i++){
            if(vec[i]-last_ind > k){
                last_ind = vec[i-1];
                ans++;
            }
        }
        
        printf("%d\n", ans);



    }



    return 0;
}
