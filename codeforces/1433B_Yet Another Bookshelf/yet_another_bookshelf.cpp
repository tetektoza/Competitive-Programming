#include <bits/stdc++.h>


int main()
{
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;

        auto arr = new int[n];
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }

        int moves = 0, tmp_bank = 0;
        int flag = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 1 && flag == 1){
                moves += tmp_bank;
                tmp_bank = 0;
            }
            else if(arr[i] == 1){
                flag = 1;
            }
            else if(arr[i] == 0 && flag == 1){
                tmp_bank++;
            }
        }
        
        std::cout << moves << std::endl;


        delete[] arr;
    }



    return 0;
}
