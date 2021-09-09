#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    scanf("%d", &t);
    while(t--){
 
        int n;
        scanf("%d", &n);
        
        vector<int> odd, even;
        for(int i = 0; i < n*2; i++){
            int a;
            scanf("%d", &a);
            if(a & 1) odd.push_back(i+1);
            else even.push_back(i+1);
        }
 
        int ev_size = even.size(), odd_size = odd.size();
        if(ev_size % 2 != 0) ev_size--;
        if(odd_size % 2 != 0) odd_size--;
        
        if(ev_size > (n*2)-2) ev_size = (n*2)-2;
 
        int total_size = ((n*2)-2) - ev_size;
        for(int i = 0; i < ev_size; i++){
            printf("%d ", even[i]);
            if(i % 2 != 0) printf("\n");
        }
        
        for(int i = 0; i < total_size; i++){
            printf("%d ", odd[i]);
            if(i % 2 != 0) printf("\n");
        }
 
 
        
    }
 
 
 
    return 0;
}
