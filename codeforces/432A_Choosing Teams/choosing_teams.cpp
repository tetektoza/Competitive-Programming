#include <iostream>

int main(){
    
    int n, k;
    std::cin >> n >> k;
    
    auto arr = new int[n];
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    
    int cnt = 0, cnt_total = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] + k <= 5){
            cnt++;
            if(cnt == 3){
                cnt = 0;
                cnt_total++;
            }
        }
    }
    
    std::cout << cnt_total << std::endl;

    delete[] arr;

    return 0;
}
