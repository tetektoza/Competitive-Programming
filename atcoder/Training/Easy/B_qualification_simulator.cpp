#include <bits/stdc++.h>

using namespace std;


int main(){

    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    string s;
    cin >> s;
    
    int sum = 0, last = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'c'){
            printf("No\n");
            continue;
        }

        if(s[i] == 'a' && sum < a+b){
            sum++;
            printf("Yes\n");
        }
        else if(s[i] == 'b' && (sum < a+b && last+1 <= b)){
            sum++;
            last++;
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }






    return 0;
}

