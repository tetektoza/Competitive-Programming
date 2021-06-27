#include <iostream>




int main(){
    long long t, x, y, n, result;

    std::ios_base::sync_with_stdio(false);

    std::cin >> t;
    for(int i = 0; i < t; i++){
        std::cin >> x >> y >> n;

        if(n % x == y){
            result = n;
        }
        else if(n % x < y){
            result = n - (n%x) - (x-y);
        }
        else if(n % x > y){
            result = n - (n%x - y);
        }
        

        std::cout << result << std::endl;
    } 



    return 0;
}
