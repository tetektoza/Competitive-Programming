#include <iostream>



int main(){

    int t, a, b;
    int k = 10;
    std::cin >> t;
    
    for(int i = 0; i < t; i++){
        std::cin >> a >> b;

        int sum_of_steps = 0;
        if(b > a){
            sum_of_steps = (b-a)/k;
            if(sum_of_steps != (b-a)/10.){
               sum_of_steps++; 
            }

        }
        else if(b < a){
            sum_of_steps = (a-b)/k;
            if(sum_of_steps != (a-b)/10.){
                sum_of_steps++;
            }
        }

        std::cout << sum_of_steps << std::endl;

    }    


    return 0;
}
