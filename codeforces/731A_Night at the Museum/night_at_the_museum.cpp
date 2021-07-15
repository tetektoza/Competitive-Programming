#include <iostream>
#include <math.h>

int main(){
    
    std::string inp;
    std::cin >> inp;

    char curr = 'a';
    int cnt = 0;
    int len_forw = 0, len_back = 0;
    for(int i = 0; i < inp.size(); i++){
        
        len_back = abs(curr - inp[i]);
        len_forw = 26 - abs(curr-inp[i]);
        
        if(len_forw < len_back){
            cnt += len_forw;
        }
        else{
            cnt += len_back;
        }

        curr = inp[i];
        
    }


    std::cout << cnt << std::endl;




    return 0;
}
