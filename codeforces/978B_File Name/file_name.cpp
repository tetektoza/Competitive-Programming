#include <bits/stdc++.h>



int main(){
    int n;
    std::string file_name;
    std::cin >> n >> file_name;
    
    int cnt = 0, total = 0;
    for(int i = 0; i < n; i++){
        if(file_name[i] == 'x'){
            cnt++;
        }
        else{
            if(cnt > 2){
                total += (cnt-2);
            }

            cnt = 0;
        }
    }

    if(cnt < 3){
        std::cout << total << std::endl;
    }
    else{
        std::cout << (cnt-2)+total << std::endl;
    }

    return 0;
}
