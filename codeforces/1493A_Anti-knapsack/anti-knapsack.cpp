#include <bits/stdc++.h>



using namespace std;




int main(){
    
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int half;
        if(k % 2 == 0) half = k/2;
        else half = (k/2)+1;

        vector<int> ans;
        int size = n;
        for(int i = 0; i < n; i++){
            if(size == k){
                size--;
                continue;
            }
            
            if(size == half-1){
                break;
            }

            ans.push_back(size);
            size--;

        }

        cout << ans.size() << endl;
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;

    }


    return 0;
}
