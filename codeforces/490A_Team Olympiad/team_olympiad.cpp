#include <iostream>

int main(){
    
    int n;
    std::cin >> n;

    auto teams_arr = new int[n];
    for(int i = 0; i < n; i++){
        std::cin >> teams_arr[i];
    }
    
    int cnt = 1, cnt_loop = 0, cnt_ppl = 0, cnt_teams = 0;
    auto indices_arr = new int[n];

    while(cnt_loop != n){
        for(int i = 0; i < n; i++){
            if(teams_arr[i] == cnt && teams_arr[i] != 0){
                if(cnt == 3){
                    cnt = 1;
                    cnt_teams++;
                }
                else{
                    cnt++;
                }
                indices_arr[cnt_ppl] = i+1;
                teams_arr[i] = 0;
                cnt_ppl++;
                
            }
        }
        cnt_loop++;
    }

    
    std::cout << cnt_teams << std::endl;
    
    if(cnt_ppl % 3 != 0){
        cnt_ppl = cnt_ppl - (cnt_ppl % 3);
    }

    if(cnt_teams > 0){
        for(int i = 0; i < cnt_ppl; i++){
            if(i == 3){
                std::cout << std::endl;
            }
            std::cout << indices_arr[i] << " ";
        }
    }

    delete[] indices_arr;
    delete[] teams_arr;
    return 0;
}
