#include <bits/stdc++.h>

using namespace std;


int main(){
    
    int n;
    scanf("%d", &n);
    

    vector<int> vec(3);
    int flag = 0;
    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        
        if(a == 50 && !flag){
            if(vec[0] - 1 < 0){
                flag = 1;
                continue;
            }

            vec[0]--;
            vec[1]++;
        }
        else if(a == 100 && !flag){
            if((vec[0] - 3 < 0) && (vec[1] - 1 < 0 || vec[0] - 1 < 0)){
                flag = 1;
                continue;
            }
            
            if(vec[1] - 1 >= 0 && vec[0] - 1 >= 0){
                vec[1]--;
                vec[0]--;
            }
            else{
                vec[0] -= 3;
            }

            vec[2]++;

        }
        else if(!flag){
            vec[0]++;
        }
    }
    
    (flag) ? printf("NO\n") : printf("YES\n");

    return 0;
}
