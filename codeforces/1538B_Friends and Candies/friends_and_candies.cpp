#include <bits/stdc++.h>



int main(){

    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;

        auto arr = new int[n];
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
            sum += arr[i];
        }
    
        if(sum % n == 0){
            int el = sum/n;
            
            int dist = 0, k = 0;
            for(int i = 0; i < n; i++){
                if(arr[i] < el){
                    dist += (el-arr[i]);
                }

                 if(arr[i] > el){
                    dist -= (arr[i]-el);
                    k++;
                }

            }
            
            std::cout << k << std::endl;

        }
        else{
            std::cout << -1 << std::endl;
        }


        delete[] arr;
    }



    return 0;
}
