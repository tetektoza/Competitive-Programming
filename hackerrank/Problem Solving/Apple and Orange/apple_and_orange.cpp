#include <bits/stdc++.h>

void countApplesAndOranges(int s, int t, int a, int b, std::vector<int> apples, std::vector<int> oranges){

    int app = 0, ora = 0;

    for(int i = 0; i < apples.size(); i++){
        if(apples[i]+a >= s && apples[i]+a <= t){
            app++;
        }
    }

    for(int i = 0; i < oranges.size(); i++){
        if(b+oranges[i] >= s && b+oranges[i] <= t){
            ora++;
        }
    }


    std::cout << app << std::endl;
    std::cout << ora << std::endl;

}



int main(){
    
    int s, t, a, b, m, n;

    std::cin >> s >> t >> a >> b >> m >> n;
    
    std::vector<int> vec_app(m); 
    std::vector<int> vec_or(n);
    for(int i = 0; i < m; i++){
        std::cin >> vec_app[i];
    }

    for(int i = 0; i < n; i++){
        std::cin >> vec_or[i];
    }

    countApplesAndOranges(s, t, a, b, vec_app, vec_or);


    return 0;
}
