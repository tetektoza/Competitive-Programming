#include <iostream>



int main(){
    std::string tern;
    std::cin >> tern;

    std::string tern_output = "";
    for(int i = 0; i < tern.length(); i++){
        if(tern[i] == '.'){
            tern_output += "0";
        }
        else{
            if(tern[i+1] == '.'){
                tern_output += "1";
                i++;
            }
            else{
                tern_output += "2";
                i++;
            }
        }

    }
    

    std::cout << tern_output << std::endl;


    return 0;
}
