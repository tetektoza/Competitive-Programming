#include <iostream>
#include <string>
    
// solution is kinda overkill, but didnt bother to change that

std::string check_n_change_case(std::string &word){
    int upper_case = 0, lower_case = 0;
    for(int i = 0; i < word.length(); i++){
        if(word[i] > 90){
            lower_case++;
        }
        else{
            upper_case++;
        }
    }

    if(upper_case > lower_case){
        for(int i = 0; i < word.length(); i++){
            if(word[i] > 90){
                word[i] = word[i] - 32;
            }
        }

    }
    else{
        for(int i = 0; i < word.length(); i++){
            if(word[i] <= 90){
                word[i] = word[i] + 32;
            }
        }
    }
    

    return word;
}


int main(){
    std::string word;
    std::cin >> word;
    check_n_change_case(word);

    std::cout << word << std::endl;


    return 0;
}
