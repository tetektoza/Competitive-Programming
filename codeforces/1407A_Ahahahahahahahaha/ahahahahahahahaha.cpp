#include <bits/stdc++.h>


using namespace std;


int main(){
    
    int t;
    scanf("%d", &t);
    while(t--){

        int n;
        scanf("%d", &n);
        
        int a; 
        int ones = 0, zeros = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &a);
            (a == 1) ? ones++ : zeros++;
        }

        if(ones % 2 != 0) ones--;
        
        vector<int> vec; 
        if(zeros >= ones){
            for(int i = 0; i < zeros; i++){
                vec.push_back(0);
            }
        }
        else{
            for(int i = 0; i < ones; i++){
                vec.push_back(1);
            }
        }


        printf("%d\n", vec.size());
        for(int i = 0; i < vec.size(); i++){
            printf("%d ", vec[i]);
        }

        printf("\n");

    }



}
