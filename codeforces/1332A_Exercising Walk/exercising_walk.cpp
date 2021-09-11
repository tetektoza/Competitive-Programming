#include <bits/stdc++.h>


using namespace std;

int main(){
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        int a, b, c, d, x, y, x1, y1, x2, y2;
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        scanf("%lld%lld%lld%lld%lld%lld", &x, &y, &x1, &y1, &x2, &y2);
        
        if((x-1 < min(x1,x2) && a > 0 && x+1 > max(x1,x2) && b > 0) || (y-1 < min(y1,y2) && c > 0 && y+1 > max(y1,y2) && d > 0)){
            printf("No\n");
            continue;
        }

        int max_sides = x + (b-a);
        int max_tops = y + (d-c);
        
        bool check_tops = (max_tops <= max(y1,y2) && max_tops >= min(y1,y2)) ? true : false;

        bool check_sides = (max_sides <= max(x1,x2) && max_sides >= min(x1,x2)) ? true : false;

        (check_tops && check_sides) ? printf("Yes\n") : printf("No\n"); 



    }



    return 0;
}
