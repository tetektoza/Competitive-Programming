#include <bits/stdc++.h>


using namespace std;


int main(){
    

    const int mxN = 1e2;
    int n, a[mxN];
    cin >> n;
    
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    int ans;
    if(even > odd){
        for(int i = 0; i < n; i++){
            if(a[i] % 2 != 0){
                ans = i+1;
                break;
            }
        }
    }
    else{
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0){
                ans = i+1;
                break;
            }
        }
    }

    cout << ans << '\n';




    return 0;
}

/*
// or this solution:

#include <bits/stdc++.h>


using namespace std;


int main(){

    const int mxN = 1e2;

    int n, a[mxN];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int prev = a[0];
    int ans;
    for(int i = 1; i < n-1; i++){
        if(a[i] % 2 == 0 && prev % 2 != 0 && a[i+1] % 2 != 0
            || a[i] % 2 != 0 && prev % 2 == 0 && a[i+1] % 2 == 0){

            ans = i+1;
            break;

        }
        else if(a[i+1] % 2 != 0 && prev % 2 == 0 && a[i] % 2 == 0
            || a[i+1] % 2 == 0 && prev % 2 != 0 && a[i] % 2 != 0){

            ans = i+2;
            break;

        }
        else if(prev % 2 == 0 && a[i] % 2 != 0 && a[i+1] % 2 != 0
            || prev % 2 != 0 && a[i] % 2 == 0 && a[i+1] % 2 == 0){

            ans = i;
            break;
        }

        prev = a[i];
    }


    cout << ans << '\n';




    return 0;
}

*/
