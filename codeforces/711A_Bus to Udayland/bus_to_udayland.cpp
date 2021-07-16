#include <iostream>

int main(){
    
    int n;
    std::cin >> n;
    
    char** arr = new char*[n];
    for(int i = 0; i < n; i++){
        arr[i] = new char[5];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            std::cin >> arr[i][j];
        }
    }


    int flag = 1;
    for(int i = 0; i < n; i++){
        if(arr[i][0] == 'O' && arr[i][1] == 'O'){
            flag = 0;
            arr[i][0] = '+'; arr[i][1] = '+';
            break;
        }
        else if(arr[i][3] == 'O' && arr[i][4] == 'O'){
            flag = 0;
            arr[i][3] = '+'; arr[i][4] = '+';
            break;
        }
    }


    if(flag){
        std::cout << "NO" << std::endl;
    }
    else{
        std::cout << "YES" << std::endl;
    
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 5; j++){
                std::cout << arr[i][j];
            }

            std::cout << std::endl;
        }
    }

    for(int i = 0; i < n; i++){
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}
