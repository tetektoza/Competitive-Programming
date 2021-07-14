#include <iostream>


int main(){

    int t, l, r;

    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> l >> r;
        

        int flag = 1, x, y;
        if(l % 2 == 0 && r % 2 == 0){
            if(r - l >= r/2){
                y = r;
                x = r/2;
                flag = 0;
            }
        }
        else{
            if(r % 2 == 0 && r-l >= r/2){
                y = r;
                x = r/2;
                flag = 0;
            }
            else if(r-l >= (r-1)/2 && (r-l > 1)){
                y = r-1;
                x = (r-1)/2;
                flag = 0;
            }
        }


        if(flag || l > x || r < y){
            std::cout << "-1 -1" << std::endl;
        }
        else{
            std::cout << x << " " << y << std::endl;
        }

    }

    return 0;
}
