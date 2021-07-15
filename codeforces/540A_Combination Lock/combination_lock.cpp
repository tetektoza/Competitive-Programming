#include <iostream>
#include <math.h>

int main(){
    int n;
    std::string original, unlock;
    std::cin >> n >> original >> unlock;
    

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(abs(original[i] - unlock[i]) > 10 - abs(original[i] - unlock[i])){
            cnt += 10 - abs(original[i] - unlock[i]);
        }
        else{
            cnt += abs(original[i] - unlock[i]);
        }
    }

    std::cout << cnt << std::endl;


    return 0;
}
