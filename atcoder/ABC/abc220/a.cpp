#include <bits/stdc++.h>


using namespace std;

int main(){
    
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int flag = 0;
    int cnt = 1, num;
    while(c <= b){
        c *= cnt;
        cnt++;

        if(c >= a && c <= b){
            flag = 1;
            num = c;
            break;
        }
    }


    (flag) ? printf("%d", num) : printf("-1");


    return 0;
}
