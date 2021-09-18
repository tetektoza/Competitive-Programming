#include <bits/stdc++.h>
<<<<<<< HEAD

using namespace std;


int main(){

=======
 
using namespace std;
 
 
int main(){
 
>>>>>>> 1735cfefda119fb0d7af0ffb53d100bfa4ef0767
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    scanf("%d", &t);
    while(t--){
<<<<<<< HEAD

=======
 
>>>>>>> 1735cfefda119fb0d7af0ffb53d100bfa4ef0767
        int n;
        scanf("%d", &n);
        
        vector<int> odd, even;
        for(int i = 0; i < n*2; i++){
            int a;
            scanf("%d", &a);
            if(a & 1) odd.push_back(i+1);
            else even.push_back(i+1);
        }
<<<<<<< HEAD

=======
 
>>>>>>> 1735cfefda119fb0d7af0ffb53d100bfa4ef0767
        int ev_size = even.size(), odd_size = odd.size();
        if(ev_size % 2 != 0) ev_size--;
        if(odd_size % 2 != 0) odd_size--;
        
        if(ev_size > (n*2)-2) ev_size = (n*2)-2;
<<<<<<< HEAD

=======
 
>>>>>>> 1735cfefda119fb0d7af0ffb53d100bfa4ef0767
        int total_size = ((n*2)-2) - ev_size;
        for(int i = 0; i < ev_size; i++){
            printf("%d ", even[i]);
            if(i % 2 != 0) printf("\n");
        }
        
        for(int i = 0; i < total_size; i++){
            printf("%d ", odd[i]);
            if(i % 2 != 0) printf("\n");
        }
<<<<<<< HEAD


        
    }



=======
 
 
        
    }
 
 
 
>>>>>>> 1735cfefda119fb0d7af0ffb53d100bfa4ef0767
    return 0;
}
