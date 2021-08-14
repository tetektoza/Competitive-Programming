#include <bits/stdc++.h>


double *plusMinus(int arr[], int size){
    int pluses = 0, minuses = 0, zeros = 0;
    
    auto vals = new double[3];
    for(int i = 0; i < size; i++){
        if(arr[i] < 0){
            minuses++;
        }
        else if(arr[i] > 0){
            pluses++;
        }
        else{
            zeros++;
        }
    }

    vals[0] = pluses/(float)size; vals[1] = minuses/(float)size; vals[2] = (zeros)/(float)size;
    

    return vals;
}



int main(){
    int n;
    std::cin >> n;
    auto arr = new int[n];

    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }


    auto ans = plusMinus(arr, n);

    for(int i = 0; i < 3; i++){
        std::cout << ans[i] << std::endl;
    }
    
    
    delete[] arr, ans;
    return 0;
}
