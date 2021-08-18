#include <bits/stdc++.h>


using namespace std;

int jumpingOnClouds(int n, int k, int a[]){
    
    int e_lvl = 100, ind = 0;
    while(true){
        ind = (ind+k)%n;

        if(a[ind] == 1){
            e_lvl -= 3;
        }
        else{
            e_lvl--;
        }
        

        if(ind == 0){
            break;
        }
    }


    return e_lvl;
}

int main(){
    const int mxN = 25;
    int n, k, a[mxN];
    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    auto ans = jumpingOnClouds(n, k, a);
    
    cout << ans << '\n';

    return 0;
}
