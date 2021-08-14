#include <bits/stdc++.h>

int *compareTriplets(int arr_a[], int arr_b[]){
    int alice = 0, bob = 0;
    auto ans = new int[2];
    for(int i = 0; i < 3; i++){
        if(arr_a[i] > arr_b[i]){
            alice++;
        }
        else if(arr_a[i] < arr_b[i]){
            bob++;
        }
    }

    ans[0] = alice; ans[1] = bob;
    return ans;

}


int main(){


    auto arr_a = new int[3];
    auto arr_b = new int[3];


    for(int i = 0; i < 3; i++){
        std::cin >> arr_a[i];
    }

    for(int i = 0; i < 3; i++){
        std::cin >> arr_b[i];
    }


    auto ans = compareTriplets(arr_a, arr_b);

    for(int i = 0; i < 2; i++){
        std::cout << ans[i] << " ";
    }

    std::cout << std::endl;

    delete[] arr_a, arr_b, ans;
}
