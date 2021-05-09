#include <iostream>
#include <string>
#include <vector>

int main(){

    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        std::cin >> a;
        int *array1 = new int[a];

        for(int i = 0; i < a; i++){
            std::cin >> array1[i];
        }

        for(int i = a - 1; i >= 0; i--){
            std::cout << array1[i] << " ";
        }

        std::cout << std::endl;


        delete[] array1;

    }

    return 0;
}