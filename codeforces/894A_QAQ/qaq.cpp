#include <bits/stdc++.h>



int main(){

    std::string qaq;
    std::cin >> qaq;
    
    int qs = 0;
    for(int i = 0; i < qaq.size(); i++){
        if(qaq[i] == 'Q'){
            for(int j = i; j < qaq.size(); j++){
                if(qaq[j] == 'A'){
                    for(int x = j; x < qaq.size(); x++){
                        if(qaq[x] == 'Q'){
                            qs++;
                        }
                    }
                }
            }
        }
    }

    std::cout << qs << std::endl;
    
    return 0;
}
