#include <bits/stdc++.h>



int main(){

    int t;
    std::cin >> t;
    while(t--){
        std::string s;
        std::cin >> s;

        std::vector<int> vec;
        int max = 0;
        for(int i = 0; i < s.size(); i++){
            if((s[i] == '1' && i == s.size()-1) || (s[i] == '1' && s[i+1] == '0')){ 
                max++;
                vec.push_back(max);
                max = 0;
            }
            else if(s[i] == '1'){
                max++;
            }
        }
        
        std::sort(vec.begin(), vec.end(), std::greater<int>());
        
        int alice = 0;
        for(int i = 0; i < vec.size(); i++){
            if(i % 2 == 0){
                alice += vec[i];
            }
        }

        std::cout << alice << std::endl;


    }



    return 0;
}
