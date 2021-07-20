#include <bits/stdc++.h>



int main(){

    int t;
    std::cin >> t;
    while(t--){
        int n;
        
        std::cin >> n; 

        auto arr = new int[2*n];
        int odds = 0, evens = 0;
        for(int i = 0; i < 2*n; i++){
            std::cin >> arr[i];
            if(arr[i] % 2 == 0){
                evens++;
            }
            else{
                odds++;
            }
        }
        

        if(odds == n && evens == n){
            std::cout << "Yes" << std::endl;
        }
        else{
            std::cout << "No" << std::endl;
        }


        delete[] arr;

    }




    return 0;
}
