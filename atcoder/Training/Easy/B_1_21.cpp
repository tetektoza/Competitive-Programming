#include <bits/stdc++.h>


using namespace std;


int main(){
    string a, b;
    cin >> a >> b;

    a += b;

    int res = stoi(a);

    int flag = 0;
    for(int i = 1; i <= res; i++){
        if(i*i == res){
            flag = 1;
            break;
        }
    }

    (flag) ? printf("Yes\n") : printf("No\n");




}
