#include <iostream>


int main(){

    int n, cnt = 0, cnt_smallest = 0, cnt_largest, contest;
    std::cin >> n;

    auto contests = new int[n];

    for(int i = 0; i < n; i++){
        std::cin >> contest;
        contests[i] = contest;
    }
    
    for(int i = 0; i < n; i++){

        cnt_smallest = 0, cnt_largest = 0;

        for(int j = 0; j < n; j++){
            if(i == j){
                break;
            }
            else if(contests[i] > contests[j]){
                cnt_largest++;
            }
            else if(contests[i] < contests[j]){
                cnt_smallest++;
            }


            if(cnt_smallest == i || cnt_largest == i){
                cnt++;
            }
        }
    }

    std::cout << cnt << std::endl;


    return 0;
}
