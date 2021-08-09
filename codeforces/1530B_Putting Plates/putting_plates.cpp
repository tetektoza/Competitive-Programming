#include <bits/stdc++.h>



using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int h, w;
        cin >> h >> w;

        for(int i = 0; i < h; i++){
            if(i == 0 || i == h-1){
                for(int j = 0; j < w; j++){
                    if(j % 2 == 0){
                        cout << 1;
                        continue;
                    }

                    cout << 0;
                }

                cout << "\n";
            }
            else{
                for(int j = 0; j < w; j++){
                    if((j == 0 || j == w-1) && i % 2 == 0 && i+1 != h-1){
                        cout << 1;
                        continue;
                    }

                    cout << 0;
                }

                cout << "\n";
            }

        }

    }



    return 0;
}
