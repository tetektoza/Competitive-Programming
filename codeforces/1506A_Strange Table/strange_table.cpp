#include <bits/stdc++.h>



int main(){

    long long t, n, m, x;
    std::cin >> t;

    while(t--){
        std::cin >> n >> m >> x;

        long long col = m - ((n*m)-x)/n;
        long long row = n - (n*col-x);

        long long by_rows = (m*row) - (m-col);

        std::cout << by_rows << std::endl;

    }




    return 0;
}
