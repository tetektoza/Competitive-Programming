#include <iostream>


int main(){

    // minutes left to 24:00 = 240

    int n, k, time_to_solve_all = 0, cnt = 0;
    std::cin >> n >> k;

    for(int i = 1; i <= n; i++){

        time_to_solve_all += 5*i;

        if(time_to_solve_all + k < 241){
            cnt++;
        }
        else{
            break;
        }
    }
    
    std::cout << cnt << std::endl;

    return 0;
}
