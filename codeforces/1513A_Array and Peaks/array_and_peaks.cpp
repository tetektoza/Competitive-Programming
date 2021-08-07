#include <bits/stdc++.h>



using namespace std;



int main(){

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        if((n % 2 == 0 && k > (n/2)-1) || (n%2 != 0 && k > n/2)){
            cout << -1 << endl;
            continue;
        }

        vector<int> ans(n);
        int max = n, smallest = 1;
        for(int i = 0; i < n; i++){
            if(i % 2 != 0 && k > 0){
                ans[i] = max;
                max--; k--;
                continue;
            }

            ans[i] = smallest;
            smallest++;
        }

        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }

        cout << endl;
    }



    return 0;
}
