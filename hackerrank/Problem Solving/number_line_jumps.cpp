#include <bits/stdc++.h>

// math solution
std::string kangaroo(int x1, int v1, int x2, int v2){
    
    if(x1 < x2 && v1 < v2){
        return "NO";
    }
    else{
        if(v1-v2 == 0){
            return "NO";
        }

        if((x2-x1)%(v1-v2) == 0){
            return "YES";
        }

        return "NO";

    }
}



// brute force solution
/*
std::string kangaroo(int x1, int v1, int x2, int v2){
    
    if(x1 < x2 && v1 < v2){
        return "NO";
    }
    else{
        while(true){
            
            if(x1+v1 > x2+v2){
                break;
            }

            x1 += v1;
            x2 += v2;
        }

        if(x1 == x2){
            return "YES";
        }

        return "NO";

    }
}
*/

int main(){

    int x1, v1, x2, v2;

    std::cin >> x1 >> v1 >> x2 >> v2;

    std::string ans = kangaroo(x1, v1, x2, v2);

    std::cout << ans << std::endl;



    return 0;
}
