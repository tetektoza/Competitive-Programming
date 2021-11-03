#include <bits/stdc++.h>


using namespace std;

int main(){
    
    int n;
    vector<vector<int>> a(3, vector<int>(3));
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int b;
        scanf("%d", &b);
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(a[i][j] == b){
                    a[i][j] = 'x';
                }
            }
        }
    }
    
    int flag = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if((i == 0 || (i > 0 && j == 0)) && a[i][j] == 'x'){
                if(j == 0){
                    if(a[i][j+1] == 'x' && a[i][j+2] == 'x'){
                        flag = 1; break;
                    }
                }

                if(i == 0){
                    if(a[i+1][j] == 'x' && a[i+2][j] == 'x'){
                        flag = 1; break;
                    }
                }
            }
            else if(i == 1 && j == 1 && a[i][j] == 'x'){
                if(a[i-1][j-1] == 'x' && a[i+1][j+1] == 'x'){
                    flag = 1; break;
                }
                else if(a[i-1][j+1] == 'x' && a[i+1][j-1] == 'x'){
                    flag = 1; break;
                }
            }
            

        }
        
        if(flag) break;
    }

    (flag) ? printf("Yes\n") : printf("No\n");


    return 0;
}

