#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    
    int dupl = 5, prev = 5, total = 0;
    for(;;){
        if(total >= n || n <= 5){
            break;
        }


        dupl *= 2;
        total += dupl+prev;
        prev = 0;
    }
    
    
    int bit = dupl/5, start = (total-dupl)+1;
    if(n <= 5) start = 1;


    if(n >= start && n < start+bit){
        printf("Sheldon\n");
    }
    else if(n >= start+bit && n < start+bit*2){
        printf("Leonard\n");
    }
    else if(n >= start+bit*2 && n < start+bit*3){
        printf("Penny\n");
    }
    else if(n >= start+bit*3 && n < start+bit*4){
        printf("Rajesh\n");
    }
    else{
        printf("Howard\n");
    }

    return 0;
}
