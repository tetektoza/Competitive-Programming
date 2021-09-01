#include <bits/stdc++.h>


using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        const int mxN = 5e1;
        int n, a[mxN];
        cin >> n;
        
        int odd = 0, even = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % 2 == 0) even++;
            else odd++;
        }
        

        if(odd % 2 == 0 && even % 2 == 0){
            printf("YES\n");
            continue;
        }
        else{
            for(int i = 0; i < n-1; i++){
                if(a[i] == 0) continue;

                for(int j = i+1; j < n; j++){
                    if(a[j] == 0) continue;

                    if(abs(a[i]-a[j]) == 1){
                        a[i] = 0; a[j] = 0;
                        odd--; even--;
                        break;
                    }
                }

                if(odd % 2 == 0 && even % 2 == 0) break;
            }
        }

        (odd % 2 == 0 && even % 2 == 0) ? printf("YES\n") : printf("NO\n");
        



    }


    return 0;
}
