#include <bits/stdc++.h>



using namespace std;



int main(){

    int d1, m1, y1, d2, m2, y2;

    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    
    int ans = 0;
    if(y1 > y2){
        ans = 10000;
    }
    else if(m1 > m2 && y1 >= y2){
        ans = 500*(m1-m2);
    }
    else if(d1 > d2 && m1 >= m2 && y1 >= y2){
        ans = 15*(d1-d2);
    }

    cout << ans << '\n';

    return 0;
}
