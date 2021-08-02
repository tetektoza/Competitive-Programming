#include <bits/stdc++.h>

int main(){
    
    std::vector<unsigned long long> vec;
    vec.push_back(0); vec.push_back(1);
    int i = 2, sum = 0;
    while(true){
        
        vec.push_back(vec[i-1] + vec[i-2]);

        if(vec[i] % 2 == 0){
            sum += vec[i];
        }

        i++;

        if((vec[i-1] + vec[i-2]) > 4000000){
            break;
        }


    }

    std::cout << sum << std::endl;

    return 0;
}
