#include <bits/stdc++.h>


using namespace std;


int *breakingRecords(int arr[], int n){
    
    int min = arr[0], max = arr[0];
    auto ans = new int[2]; ans[0] = 0, ans[1] = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            ans[0]++;
        }

        if(arr[i] < min){
            min = arr[i];
            ans[1]++;
        }
    }


    return ans;
}



int main(){
    
    int n;
    cin >> n;

    auto arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }


    auto ans = breakingRecords(arr, n);
    
    for(int i = 0; i < 2; i++){
        cout << ans[i] << " ";
    }

    cout << endl;

    delete[] arr, ans;
    return 0;
}
