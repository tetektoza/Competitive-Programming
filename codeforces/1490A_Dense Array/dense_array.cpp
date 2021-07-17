#include <bits/stdc++.h>



int main(){

    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;

        auto arr = new int[n];

        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }


        int curr = arr[0], next = arr[1];
        int adds = 0, i = 0;
        while(i < n-1){
            if(std::max(next, curr)/(float)std::min(next, curr) > 2.00){
                if(curr > next){
                    if(curr % 2 == 0){
                        curr = curr/2;
                    }
                    else{
                        curr = (curr/2)+1;
                    }
                }
                else{
                    curr = curr*2;
                }
                adds++;
            }
            else{
                i++;
                curr = arr[i];
                next = arr[i+1];
            }

       } 
        std::cout << adds << std::endl;
        delete[] arr;
    }


    return 0;
}
