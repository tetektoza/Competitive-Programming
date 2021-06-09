#include <iostream>



int main(){

    auto arr = new int[3];
    
    int prev = 0, ind, tmp;
    for(int i = 0; i < 3; i++){
        std::cin >> arr[i];
        if(arr[i] > prev && prev != 0){
            if(i == 2 && arr[i] > arr[0]){
                tmp = arr[0];
                arr[0] = arr[i];
                arr[i] = tmp;
            }
            tmp = arr[ind];
            arr[ind] = arr[i];
            arr[i] = tmp;
        }

        prev = arr[i];
        ind = i;
    }

    int distance = (arr[0] - arr[1]) + (arr[1] - arr[2]);

    std::cout << distance;

    delete[] arr;

    return 0;
}
