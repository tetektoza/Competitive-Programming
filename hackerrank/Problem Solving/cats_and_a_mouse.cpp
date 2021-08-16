#include <bits/stdc++.h>


using namespace std;


string catAndMouse(int x, int y, int z){
    

    if(abs(y-z) < abs(x-z)){
        return "Cat B";  
    }
    else if(abs(y-z) > abs(x-z)){
        return "Cat A";
    }
    else{
        return "Mouse C";
    }

}

int main(){
    int q;
    cin >> q;
    while(q--){    
        int x, y, z;
        cin >> x >> y >> z;

        cout << catAndMouse(x,y,z) << '\n';

    }

    return 0;
}
