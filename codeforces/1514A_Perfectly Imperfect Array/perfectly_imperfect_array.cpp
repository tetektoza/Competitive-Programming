#include <bits/stdc++.h>

// math based algorithm (faster than the implementation based one)

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;

        auto arr = new int[n];

        bool flag = false;
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];

            if(std::ceil(sqrt(arr[i])) != std::floor(sqrt(arr[i]))){
                flag = true;
            }
        }

        if(flag){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }
        
        delete[] arr;
    }


    return 0;
}


// implementation based solution (slower)
/*
int main(){
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;

        auto arr = new int[n];
        

        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }

        std::sort(arr, arr+n, std::greater<int>());

        bool flag = 0;        
        unsigned long long prod = 0, tmp = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j){
                    if(std::ceil(std::sqrt(arr[i])) != std::floor(std::sqrt(arr[i]))){
                        flag = 1;
                        goto end;
                    }
                    continue;
                }
                
                tmp = arr[i] * arr[j];
                
                if(std::ceil(std::sqrt(tmp)) != std::floor(std::sqrt(tmp)) || std::ceil(sqrt(arr[i])) != std::floor(sqrt(arr[i])) || std::ceil(sqrt(arr[j])) != std::floor(sqrt(arr[j]))){
                    flag = 1;
                    goto end;
                }


            }
        }

        end:

        if(flag){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }


        delete[] arr;
    }
    


    return 0;
}

*/
