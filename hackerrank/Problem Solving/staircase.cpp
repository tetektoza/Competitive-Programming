#include <bits/stdc++.h>

void staircase(int n){
    std::string s = "";

    for(int i = 0; i < n; i++){
        s += " ";
    }

    for(int i = n-1; i >= 0; i--){
        s[i] = '#';
        std::cout << s << std::endl;
    }
   

}


int main(){
    int n;
    std::cin >> n;
    
    staircase(n);


    return 0;
}
