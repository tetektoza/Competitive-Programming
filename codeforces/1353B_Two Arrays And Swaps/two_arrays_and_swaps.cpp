#include <iostream>


int main(){
    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++){
        int n, k;
        std::cin >> n >> k;
        
        auto arr_a = new int[n];
        auto arr_b = new int[n];
        for(int i = 0; i < n; i++){
            std::cin >> arr_a[i];
        }

        for(int i = 0; i < n; i++){
            std::cin >> arr_b[i];
        }
        
        int tmp;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n - 1; j++){
                if(arr_a[j] > arr_a[j+1]){
                    tmp = arr_a[j];
                    arr_a[j] = arr_a[j+1];
                    arr_a[j+1] = tmp;
                }
            }
        }

        for(int i = 0; i < k; i++){
            for(int j = 0; j < n; j++){
                if(arr_a[i] < arr_b[j]){
                    tmp = arr_a[i];
                    arr_a[i] = arr_b[j];
                    arr_b[j] = tmp;
                }
            }
        }
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr_a[i];
        }

        std::cout << sum << std::endl;

        delete[] arr_a;
        delete[] arr_b;
    }

}
