#include <bits/stdc++.h>


using namespace std;

int beautifulDays(int i, int j, int k){
    
    int reversed = 0, remainder, tmp, ans = 0; 
    for(int x = i; x <= j; x++){
        tmp = x; reversed = 0;
        while(tmp != 0){
            remainder = tmp%10;
            reversed = reversed*10+remainder;
            tmp/=10;
        }

        if((x-reversed) % k == 0){
            ans++;
        }
    }


    return ans;
}

int main(){
    
    int i,j,k;
    cin >> i >> j >> k;

    auto ans = beautifulDays(i, j, k);

    cout << ans << '\n';


    return 0;
}

