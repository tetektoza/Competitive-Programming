#include <iostream>


int main(){

    int t;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        int x, y, z;
        std::cin >> x >> y >> z;
        

        int a = -1, b = -1, c = -1;
        if(x > y){
            b = x;
            a = y;
            if(z == x){
                c = y;
            }
        }
        else if(x==y && x > z){
            b = x;
            a = z;
            c = z;   
        }
        else{
            a = x;
            b = y;
            if(z == y){
                c = x;
            }
        }

        if(a == -1 || b == -1 || c == -1){
            std::cout << "NO" << std::endl;
        }
        else{
            std::cout << "YES" << std::endl;
            std::cout << a << " " << b << " " << c << std::endl;
        }


    }


    return 0;
}
