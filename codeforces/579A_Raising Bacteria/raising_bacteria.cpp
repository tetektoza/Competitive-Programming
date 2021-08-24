#include <bits/stdc++.h>


using namespace std;



int main(){
    
    int x;
    cin >> x;
    
    int start = 1;
    int ans = 0;
    while(x > 0){
        if(start * 2 > x){
            ans++;
            x = x - start;
            start = 1;
            continue;
        }

        start *= 2;
    }
    
    cout << ans << endl;
    
    return 0;
}
