#include <iostream>


int main(){
    int t, a, b, c, n;

    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> a >> b >> c >> n;
        auto arr = new int[3];
        arr[0] = a; arr[1] = b; arr[2] = c;

        int max = 0, max_ind;
        for(int i = 0; i < 3; i++){
            if(arr[i] > max){
                max = arr[i];
                max_ind = i;
            }
        }
        
        for(int i = 0; i < 3; i++){
            if(i == max_ind){
                continue;
            }

            n -= (max-arr[i]);
        }
        
        if(n < 0 || (n % 3 != 0)){
            std::cout << "NO" << std::endl;
        }
        else{
            std::cout << "YES" << std::endl;
        }

        delete[] arr;
    }




    return 0;
}
