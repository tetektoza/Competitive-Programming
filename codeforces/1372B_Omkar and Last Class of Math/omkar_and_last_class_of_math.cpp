#include <bits/stdc++.h>


using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        if(n % 2 == 0){
            cout << n/2 << " " << n/2 << '\n';
            continue;
        }
        
        int div = -1;
        for(int i = 3; i <= sqrt(n); i++){
            if(n % i == 0){
                div = i;
                break;
            }
        }
        

        (div > 0) ? cout << n/div << " " << n-(n/div) << '\n' : cout << 1 << " " << n-1 << '\n'; 

    }


    return 0;
}
