#include <iostream>



int main(){
    
    int t, n;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n;
        
        int p = n;
        auto arr = new int[n];

        if(n % 2 == 0){
            for(int i = 0; i < n; i++){
                arr[i] = p;
                p--;
            }
        }
        else{
            int mid = (n/2), tmp;
            for(int i = 0; i < n; i++){

                arr[i] = p;
                p--;

                if(i == mid){
                    tmp = arr[i];
                    arr[i] = arr[i-1];
                    arr[i-1] = tmp;
                }

            }    
        }
        

        for(int i = 0; i < n; i++){
            std::cout << arr[i] << " ";
        }
        
        std::cout << std::endl;

        delete[] arr;
    }



    return 0;
}
