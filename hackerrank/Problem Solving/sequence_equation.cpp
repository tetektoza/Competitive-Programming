#include <bits/stdc++.h>


using namespace std;

int * permutationEquation(int a[], int n){
    
    auto ans = new int[n];
    int size = 0;
    for(int i = 1; i <= n; i++){
        int val;
        for(int j = 0; j < n; j++){
            if(a[j] == i){
                for(int x = 0; x < n; x++){
                    if(a[x] == j+1){
                        val = x+1;
                        break;
                    }
                }

                break;
            }
        }

        ans[size] = val;
        size++;
        
    }



    return ans;
}


int main(){
    
    const int mxN = 50;

    int n, a[mxN];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    

    auto ans = permutationEquation(a, n);

    for(int i = 0; i < n; i++){
        cout << ans[i] << '\n';
    }
    return 0;
}
