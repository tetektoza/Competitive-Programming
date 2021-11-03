#include <bits/stdc++.h>


using namespace std;


typedef unsigned long long ull;
int main(){
    
    const int mxN = 1e3;

    ull a[mxN], b[mxN], c[mxN];
    int x, y, z, k;

    scanf("%d%d%d%d", &x, &y, &z, &k);
    

    for(int i = 0; i < x; i++){
        scanf("%llu", &a[i]); 
    }

    for(int i = 0; i < y; i++){
        scanf("%llu", &b[i]);
    }

    for(int i = 0; i < z; i++){
        scanf("%llu", &c[i]);
    }
    
    sort(a, a+x, greater<ull>());
    sort(b, b+y, greater<ull>());
    sort(c, c+z, greater<ull>());
    
    vector<ull> vec(k);
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            for(int l = 0; l < z; l++){
                if((i*i)*(j*i)*(l*i) <= k){
                    vec.push_back(a[i]+b[j]+c[l]);
                    continue;
                }

                break;
            }
        }
    }

    sort(vec.begin(), vec.end(), greater<ull>());

    for(int i = 0; i < k; i++){
        printf("%llu\n", vec[i]);
    }
    


    return 0;
}
