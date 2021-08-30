#include <bits/stdc++.h>


using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int sorted = 1, prev = -1;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            if(a < prev) sorted = 0;

            prev = a;
        }
        
        int zeros = 0, ones = 0;
        for(int i = 0; i < n; i++){
            int type;
            cin >> type;
            if(type == 0) zeros++;
            else ones++;
        }

        (sorted || max(zeros,ones) < n) ? cout << "Yes" << '\n' : cout << "No" << '\n';


    }


    return 0;
}
