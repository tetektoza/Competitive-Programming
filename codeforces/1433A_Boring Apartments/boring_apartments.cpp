#include <iostream>
#include <string>


int main(){

    int t, x, n;
    std::cin >> t;
    
    for(int i = 0; i < t; i++){
        std::cin >> x;
        std::string str = std::to_string(x);

        int it;
        if(x%10 != 1){
            n = x % 10 - 1;
            it = 4*n+str.length();;
        }
        else{
            it = str.length();
        }
        
        int sum = 0, cnt = 1;
        
        for(int i = 1; i <= it; i++){
            sum += cnt;
            
            if(cnt == 4){
                cnt = 1;
            }
            else{
                cnt++;
            }

        }

        std::cout << sum << std::endl;
    }


    return 0;
}
