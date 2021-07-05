#include <iostream>


int main(){
    
    int n, m;
    std::cin >> n >> m;

    char **arr = new char*[n];

    for(int i = 0; i < n; i++){
        arr[i] = new char[m];
    }
    
    int flag = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            std::cin >> arr[i][j];
            if(arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y'){
                flag = 1;
            }
        }
    }
    
    if(flag){
        std::cout << "#Color" << std::endl;
    }
    else{
        std::cout << "#Black&White" << std::endl;
    }
     
    for(int i = 0; i < n; i++){
        delete[] arr[i];
    }
    
    delete[] arr;
    return 0;
}
