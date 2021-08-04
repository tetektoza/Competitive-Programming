#include <bits/stdc++.h>



int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while(t--){
        int n, x;

        std::cin >> n >> x;

        auto arr = new int[n];
        int sum = 0;
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];

            sum += arr[i];

        }

        if(sum == x){
            std::cout << "NO" << std::endl;
            continue;
        }

        int tmp = 0;
        int sum_w = arr[0];
        for(int i = 0; i < n-1; i++){

            if(sum_w == x){
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }

            sum_w += arr[i+1];
        }

        std::cout << "YES" << std::endl;
        for(int i = 0; i < n; i++){
            std::cout << arr[i] << " ";
        }

        std::cout << std::endl;

        delete[] arr;
    }
    


    return 0;
}
