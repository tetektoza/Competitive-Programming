#include <bits/stdc++.h>



int main(){

    int n;
    std::string commands;
    std::cin >> n >> commands;
    
    int rs = 0, ls = 0;
    for(int i = 0; i < n; i++){
        if(commands[i] == 'L'){
            ls++;
        }
        else{
            rs++;
        }
    }

    int positions = 0;
    if(rs == 0){
        positions = ls+1; 
    }
    else{
        positions = (rs+ls)+1;
    }

    std::cout << positions << std::endl;



    return 0;
}
