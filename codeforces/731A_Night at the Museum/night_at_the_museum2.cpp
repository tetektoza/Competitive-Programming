#include <iostream>
#include <math.h>

int main(){
    
    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
                       'n','o','p','q','r','s','t','u','v','w','x','y','z'};
    std::string word;
    std::cin >> word;

    char curr = 'a';
    int curr_ind = 0;
    int len_back, len_forw, cnt = 0, forw_ind, back_ind;
    for(int i = 0; i < word.length(); i++){
        len_back = 0, len_forw = 0, back_ind = curr_ind, forw_ind = curr_ind;
        
        while(alphabet[back_ind] != word[i]){
            
            len_back++;
            back_ind--;

            if(back_ind < 0){
                back_ind = 25;
            }
        }

        while(alphabet[forw_ind] != word[i]){
            len_forw++;
            forw_ind++;

            if(forw_ind > 25){
                forw_ind = 0;
            }
        }
        
        if(len_back < len_forw){
            cnt += len_back;
        }
        else{
            cnt += len_forw;
        }
        

        curr = word[i];
        curr_ind = forw_ind;

    }

    std::cout << cnt << std::endl;
    

    delete[] alphabet;
    return 0;
}
