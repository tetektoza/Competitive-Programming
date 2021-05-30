#include <iostream>



int main(){
    int t;
    std::string input_string;
    std::cin >> t;
    for(int i = 0; i < t; i++){
        std::cin >> input_string;
        
        std::string output_string = "";
        if(input_string.length() > 2){
            for(int i = 0; i < input_string.length();){
                if(i % 2 == 0 && i != 0){
                    if(input_string.length() - i > 2){
                        output_string += input_string[i+2];
                        i += 2;
                    }
                    else{
                        output_string += input_string[i+1];
                        i++;
                    }
                }
                else if(i + 1 < input_string.length()){
                    output_string += input_string[i];
                    i++;
                }
                else{
                    break;
                }
            }
        }
        else{
            output_string = input_string;
        }
    

         std::cout << output_string << std::endl;
    
    }


    return 0;
}
