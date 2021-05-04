#include <iostream>
#include <string>


int main(){

    int plusy = 0, minusy = 0, output = 0;
    std::string dlugosc_plusow;
    std::cin >> dlugosc_plusow;
    for(int i = 0; i < dlugosc_plusow.length(); i++){
        if(dlugosc_plusow[i] == '+'){
            minusy -= 1;
            plusy += 1;
        }
        else{
            plusy -= 1;
            minusy += 1;
        }


        if(minusy % 3 == 0 && !(minusy < 0) && minusy > 0){
            output = 1;
            minusy = 0;
            plusy = 0;
            std::cout << "1 ";
        }
        else if(plusy % 3 == 0 && !(plusy < 0) && plusy > 0){
            output = 1;
            plusy = 0;
            minusy = 0;
            std::cout << "5 ";
        }



    }
        if(output == 0){
            std::cout << "BRAK" << std::endl;
        }

    return 0;
}