#include <bits/stdc++.h>



using namespace std;

typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        
        int a = -1, b = -1, c = -1;
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                a = i;
                n /= i;
                break;
            }
        }

        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0 && a != i){
                b = i;
                n /= i;
                c = n;
                break;
            }
        }

        if(a != b && b != c && b != a && c != a){
            cout << "YES" << '\n';
            cout << a << " " << b << " " << c << '\n';
        }
        else{
            cout << "NO" << '\n';
        }


    }


    return 0;
}
