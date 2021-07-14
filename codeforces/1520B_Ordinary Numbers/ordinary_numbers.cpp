#include <iostream>
#include <string>


int main(){
    
    int t, n;

    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n;
        

        int cnt = 0, tmp = n;
        while(tmp >= 10){
            tmp /= 10;
            cnt++;
        }

        std::string el = "1";

        for(int i = 0; i < cnt; i++){
            el += "1";
        }

        int eleven = (std::stoi(el))*tmp;
        

        int result;
        if(n >= eleven){
           result = 9*cnt + tmp;
        }
        else{
            result = 9*cnt + (tmp-1);
        }
                
        std::cout << result << std::endl;

    }



    return 0;
}
