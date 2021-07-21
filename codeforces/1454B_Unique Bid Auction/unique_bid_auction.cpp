#include <bits/stdc++.h>


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while(t--){
        int n;

        std::cin >> n;

        auto arr = new int[n];
        
        std::vector<int> v_indices(n);

        int max_val = 0;
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];

            v_indices[arr[i]-1]++;

            if(arr[i] > max_val){
                max_val = arr[i];
            }
        }
        
        int uniq_min_val = 0;
        for(int i = 0; i < max_val; i++){

            if(v_indices[i] == 1){
                uniq_min_val = i+1;
                break;
            }
        }

        if(uniq_min_val){
            int ind;
            for(int i = 0; i < n; i++){
                if(arr[i] == uniq_min_val){
                    ind = i+1;
                    break;
                }
            }

            std::cout << ind << std::endl;
        }
        else{
            std::cout << -1 << std::endl;
        }

        delete[] arr;
    }




    return 0;
}
