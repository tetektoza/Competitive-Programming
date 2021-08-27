#include <bits/stdc++.h>

using namespace std;


int main(){

    int q;
    cin >> q;
    while(q--){
        string s1, s2;
        cin >> s1 >> s2;
        
        int lcm = (s1.size()*s2.size())/__gcd(s1.size(), s2.size());
        int size_s1 = lcm/s1.size(), size_s2 = lcm/s2.size();
        string comp = "", comp2 = "";

        for(int i = 0; i < size_s1; i++) comp += s1;
        for(int i = 0; i < size_s2; i++) comp2 += s2;

        (comp == comp2) ? cout << comp << '\n' : cout << -1 << '\n';
    }
}



/*

// You can also use this solution for this problem: //

#include <bits/stdc++.h>
using namespace std;


int main(){
    int q;
    cin >> q;
    while(q--){
        string s1, s2;
        cin >> s1 >> s2;

        string max_len, min_len;
        if(s1.length() > s2.length()){
            max_len = s1;
            min_len = s2;
        }
        else{
            max_len = s2;
            min_len = s1;
        }
        
        if(max_len.length() % min_len.length() == 0){
            string check = "";

            while(check.length() < max_len.length()){
                check += min_len;
            }
            
            if(check != max_len){
                cout << -1 << '\n';
                continue;
            }

            cout << max_len << '\n';
        }
        else{
            string min_check = "", max_check = max_len;
            
            while(min_check.length() != max_check.length()){
                min_check += min_len;

                if(min_check.length() > max_check.length()){
                    max_check += max_len;
                }
            }
            
            if(min_check != max_check){
                cout << -1 << '\n';
                continue;
            }

            cout << max_check << '\n';
        }

    }



    return 0;
}


*/
