#include <bits/stdc++.h>



using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    long long sum = 0;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        vec[i] = i+1;
        sum += i+1;
    }
    
    if(sum % 2 != 0){
        cout << "NO" << '\n';
        return 0;
    }
    
    sum /= 2;

    vector<int> first_half, second_half;
    for(int i = n-1; i >= 0; i--){
        if(sum-vec[i] >= 0){
            sum -= vec[i];
            first_half.push_back(vec[i]);
        }
        else{
            second_half.push_back(vec[i]);
        }
    }
    
    cout << "YES" << '\n'; 
    cout << first_half.size() << '\n';
    for(int i = 0; i < first_half.size(); i++){
        cout << first_half[i] << " ";
    }

    cout << '\n';
    cout << second_half.size() << '\n';
    for(int i = 0; i < second_half.size(); i++){
        cout << second_half[i] << " ";
    }
    cout << '\n';

    return 0;
}
