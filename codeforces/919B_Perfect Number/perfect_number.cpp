#include <bits/stdc++.h>


using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    scanf("%d", &k);


    int ans = 19, times = 20, k_start = 1;
    int tmp, sum = 0;
    while(k_start < k){
        tmp = times; sum = 0;
        while(tmp > 0){
            sum += (tmp%10);
            tmp /= 10;
        }
        
        if(sum <= 10){
            ans = times + 10-sum;
            k_start++;
        }

        times += 10;
    }

    printf("%d\n", ans);


    return 0;
}
