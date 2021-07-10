#include <iostream>


int main(){

    std::string table_card;
    std::cin >> table_card;

    std::string cards_in_hand = "";
    std::string input;
    for(int i = 0; i < 5; i++){
        std::cin >> input;
        cards_in_hand += input;
    }

    int flag = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 10; j++){
            if(table_card[i] == cards_in_hand[j]){
                flag = 1;
                goto end;
            }
        }

    }

    end:

    if(flag){
        std::cout << "YES" << std::endl;
    }
    else{
        std::cout << "NO" << std::endl;
    }




    return 0;
}
