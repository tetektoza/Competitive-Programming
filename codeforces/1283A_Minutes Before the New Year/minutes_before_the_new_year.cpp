#include <iostream>


int main(){

    int t, h, m;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> h >> m;

        int total = (23-h)*60 + 60-m;
        
        std::cout << total << std::endl;

    }
   



    return 0;
}
