#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    
    auto norm_array = new int[n];
    auto reverse_array = new int[n];
    
    for(int i = 0; i < n; i++){
        cin >> norm_array[i];
    }
    
    for(int i = n - 1; i >= 0; i--){
        cout << norm_array[i] << " ";
    }
    
    return 0;
}