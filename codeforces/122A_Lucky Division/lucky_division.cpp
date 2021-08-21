#include <bits/stdc++.h>


using namespace std;


int main(){

    int n;
    cin >> n;
    
    int curr, flag = 0;
    for(int i = 1; i <= n; i++){
        curr = i;
        flag = 0;
        while(curr > 0){
            if(curr % 10 != 4 && curr % 10 != 7){
                flag = 1;
                break;
            }
            curr /= 10;
        }

        if(!flag && n % i == 0){
            break;  
        }
    }

    if(flag){
        cout << "NO" << '\n';
    }
    else{
        cout << "YES" << '\n';
    }
    return 0;   
}
