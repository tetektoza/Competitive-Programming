#include <bits/stdc++.h>


using namespace std;

int main(){

    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d%d", &n, &m);
        

        int rows = n, cols = m, flag = 0, flag_vec = 0;
        vector<int> vec;
        for(int i = 0; i < n; i++){
            flag = 0;
            for(int j = 0; j < m; j++){
                int a;
                scanf("%d", &a);

                if(a == 1){
                    flag_vec = 0;
                    for(int x = 0; x < vec.size(); x++){
                        if(j == vec[x]){
                            flag_vec = 1;
                            break;
                        }
                    }

                    if(!flag_vec) vec.push_back(j);

                    flag = 1;
                }
            }

            if(flag) rows--;
        }

        cols -= vec.size();
        
        int ans = min(rows, cols);

        (ans % 2 == 0) ? printf("Vivek\n") : printf("Ashish\n");
    }


    return 0;
}
