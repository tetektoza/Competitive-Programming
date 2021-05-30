#include <iostream>


int main(){

    int n;
    std::cin >> n;
    
    int current, officers_ready = 0, crimes_counter = 0;
    for(int i = 0; i < n; i++){

        std::cin >> current;

        if(current > 0){
            officers_ready += current;
        }
        else if(officers_ready != 0){
            officers_ready--;
        }
        else{
            crimes_counter++;
        }
    }

    std::cout << crimes_counter << std::endl;

    return 0;
}
