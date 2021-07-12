#include <iostream>



int main(){

    int a_b, a_c, b_c, a_b_c;
    std::cin >> a_b >> a_c >> b_c >> a_b_c;

    auto arr = new int[4];
    auto result = new int[3];
    arr[0] = a_b; arr[1] = a_c; arr[2] = b_c; arr[3] = a_b_c;
    
    int max_ind = 0;
    for(int i = 0; i < 4; i++){
        if(arr[max_ind] < arr[i]){
            max_ind = i;
        }
    }
    
    int a, b, c;
    for(int i = 0; i < 4; i++){
        if(i == max_ind){
            continue;
        }
        
        result[i] = arr[max_ind] - arr[i];
        std::cout << result[i] << " "; 
    }
    
    std::cout << std::endl;

    delete[] arr;
    delete[] result;

    return 0;
}
