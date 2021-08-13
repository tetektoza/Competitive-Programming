#include <bits/stdc++.h>


using namespace std;


int main(){
    

    int t; cin >> t;

    while(t--){
        long long y, x;

        cin >> y >> x;
        long long ans;
        if(x >= y){
            if(x % 2 == 0){
                x = ((x-1)*(x-1))+1;
                ans = x + (y-1);
            }
            else{
                x = x*x;
                ans = x - (y-1);
            }

        }
        else{
            if(y % 2 == 0){
                y = y*y;
                ans = y - (x-1);
            }
            else{
                y = ((y-1)*(y-1))+1;
                ans = y + (x-1);
            }
        }

        cout << ans << '\n';


    }


    return 0;
}
