#include <bits/stdc++.h>


using namespace std;


int main(){

    int ts;
    cin >> ts;
    while(ts--){
        int n;
        string s;
        cin >> n >> s;
        
        int t = 0, m = 0, flag = 0;
        for(int i = 0; i < n; i++){
            (s[i] == 'T') ? t++ : m++;


            if(m > t){
                flag = 1;
                break;
            }

        }


        if(!flag){
            t = m = 0;

            for(int i = n-1; i >= 0; i--){
                (s[i] == 'T') ? t++ : m++;
                
                if(m > t){
                    flag = 1;
                    break;
                }
            }
        }


        (m*2 != t || flag) ? printf("NO\n") : printf("YES\n");

        
    }




    return 0;
}
