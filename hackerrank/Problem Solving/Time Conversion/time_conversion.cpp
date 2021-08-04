#include <bits/stdc++.h>

std::string timeConversion(std::string s){
    
    std::string ans = "";
    if(s[8] == 'P' && s[9] == 'M' && (s[0] != '1' || s[1] != '2')){
        ans += s[0]+1; ans += s[1]+2;
    }
    else if(s[0] == '1' && s[1] == '2' && s[8] == 'A' && s[9] == 'M'){
        ans += '0'; ans += '0';
    }
    else{
        ans += s[0]; ans += s[1];
    }

    for(int i = 2; i < s.length()-2; i++){
        ans += s[i];
    }


    return ans;


}


int main(){

    std::string s;
    std::cin >> s;

    auto ans = timeConversion(s);
    

    std::cout << ans << std::endl;


    return 0;
}
