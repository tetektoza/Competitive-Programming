#include <bits/stdc++.h>


using namespace std;


int main(){

    int a, b, c;
    cin >> a >> b >> c;

    int ans;
    if((a == 1 && b == 1 && c == 1) || (a == 1 && c == 1)){

        ans = a+b+c;
    }
    else if((a == 1) || (b == 1 && a <= c) || (a == 1 && b == 1)){
        ans = (a+b)*c;
    }
    else if((c == 1) || (b == 1 && c <= a) || (b == 1 && c == 1)){
        ans = a*(b+c);
    }
    else{
        ans = (a*b)*c;
    }

    cout << ans << '\n';
    


    return 0;
}


/*


///////////////// second solution with max() function /////////////////  

#include <bits/stdc++.h>


using namespace std;


int main(){

    int a, b, c;
    cin >> a >> b >> c;

    int first = a+(b*c);
    int second = a*(b+c);
    int third = a*b*c;
    int fourth = (a+b)*c;
    int fifth = a+b+c;


    int max_first = max(first, second);
    int max_second = max(third, fourth);
    int max_third = max(max_first, fifth);
    int max_fourth = max(max_second, fifth);
    int ans = max(max_third, max_fourth);

    cout << ans << endl;


    return 0;
}

*/
