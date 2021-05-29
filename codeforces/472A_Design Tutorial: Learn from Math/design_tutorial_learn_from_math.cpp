#include <iostream>



int main(){
    int n;
    std::cin >> n;
    
        int a, b;

        if(n % 2 != 0){
            a = (n/2);
            b = a + 1;
        }
        else{
            a = n/2;
            b = a;
        }

        if(a % 2 != 0 || b % 2 != 0){
            int flag = 0;
            while(true){

                flag = 0;

                for(int i = 2; i < 10; i++){
                    if(a % i == 0 && i != a){
                        flag++;
                        break;
                    }
                }

                for(int i = 2; i < 10; i++){
                    if(b % i == 0 && i != b){
                        flag++;
                        break;
                    }
                }

                if(flag == 2){
                    break;
                }
                else{
                    a -= 1;
                    b += 1;
                }

            }  
        }

        std::cout << a << " " << b << std::endl; 




    return 0;
}
