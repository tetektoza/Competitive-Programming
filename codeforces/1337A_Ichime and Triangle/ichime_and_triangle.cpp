#include <iostream>



int main(){
    
    int t;

    std::cin >> t;

    for(int i = 0; i < t; i++){
        int a, b, c, d;

        std::cin >> a >> b >> c >> d;
        
        auto abcd = new int[4];
        auto xyz = new int[3];

        abcd[0] = a; abcd[1] = b; abcd[2] = c; abcd[3] = d;
        
        int max = 0, max_ind;
        for(int i = 0; i < 4; i++){
            if(abcd[i] >= max){
                max = abcd[i];
                max_ind = i;
            }
        }


        for(int i = 0; i < 3; i++){

            if(max - abcd[i] < max - abcd[i+1] || (i+1 == max_ind)){
                xyz[i] = abcd[i];        
            }
            else{
                xyz[i] = abcd[i+1];
            }
        }


        for(int i = 0; i < 3; i++){
            std::cout << xyz[i] << " ";
        }

        std::cout << std::endl;


        delete[] abcd;
        delete[] xyz;

    }

    return 0;
}
