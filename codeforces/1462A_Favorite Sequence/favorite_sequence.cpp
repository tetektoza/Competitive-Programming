#include <iostream>
         
         
         
int main(){
         
    int t, n;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n;
         
        auto arr = new int[n];
        auto arr_restored = new int[n];
         
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }
                
        int size = 0, size_rev = n-1;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                arr_restored[i] = arr[size];
                size++;
            }
            else{
                arr_restored[i] = arr[size_rev];
                size_rev--;
            }
        }
         
        for(int i = 0; i < n; i++){
            std::cout << arr_restored[i] << " ";
        }
         
        std::cout << std::endl;
         
        delete[] arr;
        delete[] arr_restored;
    }
         
         
         
    return 0;
}
