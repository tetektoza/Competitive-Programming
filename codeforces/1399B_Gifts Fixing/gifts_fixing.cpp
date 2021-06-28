#include <iostream>



int main(){
    
    int t, n; 
    
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n;
        
        int min_candies = 1000000002, min_oranges = 1000000002;
     
        auto candies = new int[n];
        auto oranges = new int[n];

        for(int i = 0; i < n; i++){ 
            std::cin >> candies[i];
            if(candies[i] < min_candies){
                min_candies = candies[i];
            }
        } 

         for(int i = 0; i < n; i++){ 
            std::cin >> oranges[i];

            if(oranges[i] < min_oranges){
                min_oranges = oranges[i];
            }
        }

        long long steps_taken = 0;
        for(int i = 0; i < n; i++){
            if(candies[i] != min_candies && (candies[i] > oranges[i] || oranges[i] == min_oranges)){
                steps_taken += (candies[i] - min_candies);

                if(oranges[i] - (candies[i] - min_candies) > min_oranges){
                    steps_taken += (oranges[i] - (candies[i] - min_candies)) - min_oranges;
                }
            }
            else if(oranges[i] != min_oranges && (oranges[i] >= candies[i] || candies[i] == min_candies)){
                steps_taken += (oranges[i] - min_oranges);

                if(candies[i] - (oranges[i] - min_oranges) > min_candies){
                    steps_taken += (candies[i] - (oranges[i] - min_oranges)) - min_candies;
                }
            }

        } 

        std::cout << steps_taken << std::endl;

        delete[] candies;
        delete[] oranges;
    }




    return 0;
}
