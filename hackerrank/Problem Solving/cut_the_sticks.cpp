#include <bits/stdc++.h>


using namespace std;

const int mxN = 1e3;

int main(){
     
    int n, a[mxN];
    cin >> n;
    

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    sort(a, a+n);

    vector<int> ans;
    ans.push_back(n);
    int prev = a[0], size = 1;
    for(int i = 1; i < n; i++){
        if(a[i] != prev){
            ans.push_back(n-size);
        }

        size++;
        prev=a[i];
    }


    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << '\n';
    }

    return 0;
}
