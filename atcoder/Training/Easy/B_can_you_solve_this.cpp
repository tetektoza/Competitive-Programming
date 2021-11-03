#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, m, c;
    scanf("%d%d%d", &n, &m, &c);
    
    vector<int> b(m);
    for(int i = 0; i < m; i++){
        scanf("%d", &b[i]);
    }
    
    vector<vector<int>> a(n, vector<int> (m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }


    int ans = 0, sum = 0;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = 0; j < m; j++){
            sum += a[i][j]*b[j];
        }
        
        if((sum + c) > 0) ans++;
    }


    printf("%d\n", ans);


    return 0;
}
