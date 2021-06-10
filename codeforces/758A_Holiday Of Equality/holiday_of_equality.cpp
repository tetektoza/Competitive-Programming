#include <iostream>


int main(){
    
    int n;
    std::cin >> n;

    auto arr = new int[n];
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    
    int highest = 0, highest_ind;
    for(int i = 0; i < n; i++){
        if(highest < arr[i]){
            highest = arr[i];
            highest_ind = i;
        }
    }
    
    int total = 0;
    for(int i = 0; i < n; i++){
        if(i == highest_ind){
            continue;
        }

        total += highest - arr[i];
    }

    std::cout << total << std::endl;

    delete[] arr;
    return 0;
}
