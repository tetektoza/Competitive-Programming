#include <bits/stdc++.h>


using namespace std;

int main(){

    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, c;

        scanf("%d%d%d", &a, &b, &c);

        int x = 1;
        for(int i = 1; i < a; i++){
            x *= 10;
        }
        
        int y = 1;
        for(int i = 1; i < b; i++){
            y *= 10;
        }

        int g = 1;
        for(int i = 1; i < c; i++){
            g *= 10;
        }

        
        printf("%d %d\n", x, y+g);
    }


    return 0;
}
