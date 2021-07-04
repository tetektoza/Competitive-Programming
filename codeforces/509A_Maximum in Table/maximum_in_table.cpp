#include <iostream>


int main(){
    int n;
    std::cin >> n;

    int **arr = new int*[n];

    for(int i = 0; i < n; i++){
        arr[i] = new int[n];
    }
    

    for(int i = 0; i < n; i++){
        arr[0][i] = 1;
    }
    
    int max = 1;   
    for(int i = 1; i < n; i++){
        int last = 0;
        for(int j = 0; j < n; j++){
            if(j == 0){
                arr[i][j] = 1;
                continue;
            }

            arr[i][j] = arr[i-1][j] + arr[i][j-1];
            last = j;
        }

        if(arr[i][last] > arr[i-1][n-1]){
            max = arr[i][last];
        }
    }

    std::cout << max << std::endl;

    for(int i = 0; i < n; i++){
        delete[] arr[i];
    }

    delete[] arr;
    return 0;
}
