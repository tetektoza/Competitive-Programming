#include <bits/stdc++.h>


using namespace std;

int main(){

    int n;
    scanf("%d", &n);


    int res = ceil((100*n)/float(108));

    if(int(res*1.08) != n){
        printf(":(\n");
        return 0;
    }

    printf("%d", res);





    return 0;
}
