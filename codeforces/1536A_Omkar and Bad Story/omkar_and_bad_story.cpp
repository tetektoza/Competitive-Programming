#include <bits/stdc++.h>


using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        

        vector<int> vec(n);

        int flag = 0;
        for(int i = 0; i < n; i++){
            cin >> vec[i];
            if(vec[i] < 0){
                flag = 1;
            }
        }

        if(flag){
            cout << "NO" << endl;
            continue;
        }
        

        for(int i = 0; i < vec.size(); i++){
            for(int j = 0; j < vec.size(); j++){
                if(i==j){
                    continue;
                }

                flag = 0;
                for(int x = 0; x < vec.size(); x++){
                    if(abs(vec[i]-vec[j]) == vec[x]){
                        flag = 1;
                        break;
                    }
                }

                if(!flag){
                    vec.push_back(abs(vec[i]-vec[j]));
                }
            }
        }

    
        cout << "YES" << endl;
        cout << vec.size() << endl;
        for(int i = 0; i < vec.size(); i++){
            cout << vec[i] << " ";
        }
    
        cout << endl;

    }



    return 0;
}
