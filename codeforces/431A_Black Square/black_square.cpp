#include <iostream>


int main(){

    auto calories = new int[4];

    for(int i = 0; i < 4; i++){
        std::cin >> calories[i];
    }

    std::string s;
    std::cin >> s;
    
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            sum += calories[0];
        }
        else if(s[i] == '2'){
            sum += calories[1];
        }
        else if(s[i] == '3'){
            sum += calories[2];
        }
        else{
            sum += calories[3];
        } 
    }

    

    std::cout << sum << std::endl;

    delete[] calories;


    return 0;
}
