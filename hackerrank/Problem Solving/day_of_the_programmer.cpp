#include <bits/stdc++.h>


using namespace std;


string dayOfProgrammer(int n){
    
    string ans;
    
    if(n == 1918){
        return "26.09.1918";
    }

    if(n > 1918){
        if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)){
            ans = "12.09." + to_string(n);
        }
        else{
            ans = "13.09." + to_string(n);
        }
    }
    else if(n <= 1917 && n % 4 == 0){
        ans = "12.09." + to_string(n);
    }
    else{
        ans = "13.09." + to_string(n);
    }


    return ans;
}


int main(){
    
    int n;
    cin >> n;

    cout << dayOfProgrammer(n) << '\n';




    return 0;
}
