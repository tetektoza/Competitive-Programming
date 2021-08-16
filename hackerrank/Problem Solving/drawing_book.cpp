#include <bits/stdc++.h>



using namespace std;

int pageCount(int n, int p){

    int ans;    
    if(n/2 - p/2 < p/2){
        ans = n/2 - p/2;
    }
    else{
        ans = p/2;
    }


    return ans;
}

int main(){

    int n, p;
    cin >> n >> p;

    auto ans = pageCount(n, p);    
    
    cout << ans << '\n';


    return 0;
}
