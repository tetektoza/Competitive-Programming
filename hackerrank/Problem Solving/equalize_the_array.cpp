#include <bits/stdc++.h>


using namespace std;




int main(){
    

    const int mxN = 1e2;
    int n, a[mxN];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    vector<int> count(100);
    
    int max = 0;
    for(int i = 0; i < n; i++){
        count[a[i]-1]++;
        if(count[a[i]-1] > max){
            max = count[a[i]-1];
        }
    }
    
    cout << n-max << '\n';

    return 0;

}
