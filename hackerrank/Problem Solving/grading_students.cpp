#include <bits/stdc++.h>


int *gradingStudents(int grades[], int n){
    
    auto ans = new int[n];
    
    for(int i = 0; i < n; i++){
        if(grades[i] >= 38){
            int bar = ((grades[i]/5)+1)*5;
            if(bar-grades[i] < 3){
                ans[i] = bar;
            }
            else{
                ans[i] = grades[i];
            }

            continue;
        }

        ans[i] = grades[i];
    }
    


    return ans;
}



int main(){

    int n;
    std::cin >> n;

    auto arr = new int[n];

    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    auto ans = gradingStudents(arr, n);
    
    for(int i = 0; i < n; i++){
        std::cout << ans[i] << std::endl;
    }

    delete[] arr;
    return 0;
}
