#include <iostream>



int main(){
    
    int n, sum = 0, cnt = 0;
    std::cin >> n;
    int denominantions[5] = {1, 5, 10, 20, 100};
    
    int i = 4;
    while(sum != n){
        if(sum + denominantions[i] > n){
            i--;
            continue;
        }
        else{
            sum += denominantions[i];
            cnt++;
        }
    }
    
    std::cout << cnt << std::endl;

    return 0;
}
