#include <bits/stdc++.h>
 
using namespace std;

void fIO(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}


int main(){
    fIO();

    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d%d", &n, &k);
        

        vector<pair<int,int>> a(n);        
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i].first);
            a[i].second = i;
        }
        
        sort(a.begin(), a.end());

        int pairs = 1;
        for(int i = 1; i < n; i++){
            if(a[i-1].second + 1 != a[i].second) pairs++;
        }
        (pairs <= k) ? printf("Yes\n") : printf("No\n");
    }
 
 
    return 0;
}
