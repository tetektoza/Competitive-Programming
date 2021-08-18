#include <bits/stdc++.h>

// Math solution:

using namespace std;

typedef long long ll;

int main(){

    int q;
    cin >> q;

    while(q--){
        ll a, b;
        cin >> a >> b;

        cout << (floor(sqrt(b)) - ceil(sqrt(a)))+1 << endl;

        
    }
    return 0;
}




/*

Brute force-ish solution:

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(){

    int q;
    cin >> q;

    while(q--){
        ll a, b;
        cin >> a >> b;
        int start = sqrt(a);
        if(start*start != a){
            start++;
        }

        int ans = 0;

        while(true){
            if(start*start>b){
                break;
            }
            start++;
            ans++;

        }



        cout << ans << endl;
    }




    return 0;
}
*/
