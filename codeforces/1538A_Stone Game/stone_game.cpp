#include <bits/stdc++.h>

int main(){
    int t, n;
    std::cin >> t;
    for(int i = 0; i < t; i++){
        std::cin >> n;

        auto arr = new int[n];
        
        int max_ind = 0, min_ind = 0; 
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];

            if(arr[i] > arr[max_ind]){
                max_ind = i;
            }

            if(arr[i] < arr[min_ind]){
                min_ind = i;
            }

        }
        
        max_ind += 1;
        min_ind += 1;
        

        int dist_left = std::max(min_ind, max_ind), dist_right = std::max(n-(max_ind-1), n-(min_ind-1));
        int dist_left_right = min_ind + (n-(max_ind-1));
        int dist_right_left = (n-(min_ind-1)) + max_ind;
        auto moves = std::min({dist_left, dist_right, dist_left_right, dist_right_left});
        
        std::cout << moves << std::endl;

        delete[] arr;
    
    }
    
}

