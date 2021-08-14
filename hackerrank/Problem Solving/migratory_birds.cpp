#include <bits/stdc++.h>


using namespace std;

int migratoryBirds(int arr[], int n){
    
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        vec[arr[i]-1]++;
    }
    
    int max = 0, ind_max = 0;
    for(int i = 0; i < n; i++){
        if(vec[i] > max){
            max = vec[i];
            ind_max = i;
        }
    }

    return ind_max+1;
}

int main(){
    

    const int mxN = 2e5;
    int n, a[mxN];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }


    auto ans = migratoryBirds(a, n);
    cout << ans << '\n';


    return 0;
}
