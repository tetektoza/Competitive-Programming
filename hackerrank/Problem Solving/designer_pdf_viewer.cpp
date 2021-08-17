#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(int h[], string w){
    
    int max = 0;
    for(int i = 0; i < w.size(); i++){
        for(int j = 0; j < 26; j++){
            if(j == w[i]-97){
                if(h[j] > max){
                    max = h[j];
                }
            }
        }
    }
    return max*w.size();
}


int main(){
    
    int h[26];
    string w;

    for(int i = 0; i < 26; i++){
        cin >> h[i];
    }
    
    cin >> w;

    auto ans = designerPdfViewer(h, w);
    
    cout << ans << '\n';

    return 0;
}
