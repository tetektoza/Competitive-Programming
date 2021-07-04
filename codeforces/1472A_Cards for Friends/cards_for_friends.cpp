#include <iostream>


int main(){

    int t, w, h, n;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> w >> h >> n;
        
        int dist = 1;
        while(dist < n && (w % 2 == 0 || h % 2 == 0)){
            if(w % 2 == 0){
                w /= 2;
                dist *= 2;
            }   
            else if(h % 2 == 0){
                h /= 2;
                dist *= 2;
            }
        }   

        
        if(dist >= n){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }
    }



    return 0;
}
