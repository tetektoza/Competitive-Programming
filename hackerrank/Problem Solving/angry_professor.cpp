#include <bits/stdc++.h>


using namespace std;

string angryProfessor(int k, int a[], int n){
    int sum = 0;

    for(int i = 0; i < n; i++){
        if(a[i] <= 0){
            sum++;
        }
    }

    if(sum >= k){
        return "NO";
    }

    return "YES";
}


int main(){
    int t;
    cin >> t;
    while(t--){
        const int mxN = 1e3;
        int n, k, a[mxN];
        
        cin >> n >> k;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        cout << angryProfessor(k, a, n) << '\n';
    }
    


    return 0;
}
