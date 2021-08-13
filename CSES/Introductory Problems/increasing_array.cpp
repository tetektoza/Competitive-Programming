#include <bits/stdc++.h>


using namespace std;



int main(){

    int n; cin >> n;
    
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    
    int prev = vec[0];
    long long moves = 0;
    for(int i = 1; i < n; i++){
        if(vec[i] < prev){
            moves += prev-vec[i];
        }
        else{
            prev = vec[i];
        }
    }

    cout << moves << '\n';




    return 0;
}
