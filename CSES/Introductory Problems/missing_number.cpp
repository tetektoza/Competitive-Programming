#include <bits/stdc++.h>



using namespace std;


int main(){
    int n; cin >> n;
    
    vector<int> vec(n);
    int a;
    for(int i = 0; i < n-1; i++){
        cin >> a;
        vec[a-1]++;
    }

    for(int i = 0; i < n; i++){
        if(vec[i] == 0){
            cout << i+1 << '\n';
            break;
        }
    }


    return 0;
}
