#include <bits/stdc++.h>


using namespace std;

int findDigits(int n){
    
    int tmp = n, ans = 0, div;
    while(tmp > 0){
        div = tmp%10;

        if(div != 0){
            if(n % div == 0){
                ans++;
            }
        }

        tmp /= 10;
    }


    return ans;
}


int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        auto ans = findDigits(n);
        
        cout << ans << '\n';

    }

    


    return 0;   
}
