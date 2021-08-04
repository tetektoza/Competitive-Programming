#include <bits/stdc++.h>


int getTotalX(std::vector<int> vec_a, std::vector<int> vec_b, int total_max){
    
    int correct = 0, ans = 0;

    for(int i = 1; i <= total_max; i++){
        for(int j = 0; j < vec_a.size(); j++){
            if(i % vec_a[j] == 0){
                correct++;
            }
        }

        for(int j = 0; j < vec_b.size(); j++){
            if(vec_b[j] % i == 0){
                correct++;
            }
        }


        if(correct == vec_b.size()+vec_a.size()){
            ans++;
        }

        correct = 0;
    }

    return ans;

}


int main(){
    
    int n, m;
    std::cin >> n >> m;

    std::vector<int> vec_a(n), vec_b(m);

    int max_val_a = 0, max_val_b = 0;
    for(int i = 0; i < n; i++){
        std::cin >> vec_a[i];
        if(vec_a[i] > max_val_a){
            max_val_a = vec_a[i];
        }
    }

    for(int i = 0; i < m; i++){
        std::cin >> vec_b[i];
        if(vec_b[i] > max_val_b){
            max_val_b = vec_b[i];
        }
    }

    int total_max = std::max(max_val_a, max_val_b);
    int ans = getTotalX(vec_a, vec_b, total_max);


    std::cout << ans << std::endl;


    return 0;
}
