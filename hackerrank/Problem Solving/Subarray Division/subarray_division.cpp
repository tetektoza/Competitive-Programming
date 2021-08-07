#include <bits/stdc++.h>

using namespace std;

int birthday(int s[], int n, int d, int m){
    
    if(n==1){
        if(m > 1) return 0;

        return 1;
    }


    int ans = 0, sum, spins, j;
    for(int i = 0; i < n; i++){
        sum = 0, spins = 0, j = i;
        while(spins < m){
            sum += s[j];
            j++;
            spins++;
        }

        if(sum == d){
            ans++;
        }
    }


    return ans;
}   


int main(){

    int n, d, m; cin >> n;

    auto arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cin >> d >> m;
    
    auto ans = birthday(arr, n, d, m);

    cout << ans << endl;
    
    delete[] arr;
    return 0;
}
