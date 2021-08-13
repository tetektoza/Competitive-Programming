#include <bits/stdc++.h>



using namespace std;


int main(){

    int n; cin >> n;
    if(n == 2 || n == 3){
        cout << "NO SOLUTION" << '\n';
        return 0;
    }
    
    vector<int> vec(n);
    int even = 2, odd = 1;
    for(int i = 0; i < n/2; i++){
        vec[i] = even;
        even += 2;
    }

    for(int i = n/2; i < n; i++){
        vec[i] = odd;
        odd += 2;
    }

    for(int i = 0; i < n; i++){
        cout << vec[i] << " ";
    }

    cout << '\n';


    return 0;
}
