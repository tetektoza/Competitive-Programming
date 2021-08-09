#include <bits/stdc++.h>


using namespace std;


int main(){
    
    int n;
    cin >> n;
    
    cout << n << endl;

    for(int i = 0; i < n; i++){
        cout << 1 << " ";
    }

    cout << endl;


    return 0;
}



//or this solution:
/*
    #include <bits/stdc++.h>
     
     
    using namespace std;
     
    int main(){
      int n; cin >> n;
      
      int prev;
      for(int i = 1; i <= 9; i++){
        if(n % i == 0){
          prev = i;
        }
      }
      
      cout << n/prev << endl;
      
      for(int i = 0; i < n/prev; i++){
        cout << prev << " ";
      }
      
      cout << endl;
      
      return 0;
    }
*/
