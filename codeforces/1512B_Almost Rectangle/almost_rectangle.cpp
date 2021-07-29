#include <bits/stdc++.h>



int main(){

    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        
        std::vector<std::vector<char>> vec(n, std::vector<char> (n));        
        
        int col_f, row_f, col_s, row_s;
        int flag_first = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                std::cin >> vec[i][j];
                if(vec[i][j] == '*' && flag_first == 0){
                    flag_first = 1;
                    row_f = i; col_f = j;
                }
                else if(vec[i][j] == '*'){
                    row_s = i; col_s = j;
                }
            }
        }
        
        if(col_f == col_s){
            if(col_f == n-1){
                vec[row_f][col_f-1] = '*';
                vec[row_s][col_s-1] = '*';
            }
            else{
                vec[row_f][col_f+1] = '*';
                vec[row_s][col_s+1] = '*';
            }
        }
        else if(row_f == row_s){
            if(row_s == n-1){
                vec[row_f-1][col_f] = '*';
                vec[row_s-1][col_s] = '*';
            }
            else{
                vec[row_f+1][col_f] = '*';
                vec[row_s+1][col_s] = '*';
            }
        }
        else{
            vec[row_f][col_s] = '*';
            vec[row_s][col_f] = '*';
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                std::cout << vec[i][j];
            }
            std::cout << std::endl;
        }
        
    }





    return 0;
}
