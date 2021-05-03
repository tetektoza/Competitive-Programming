#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        string word;
        cin >> word;
        auto evenLetters = new char[word.length()];
        auto oddLetters = new char[word.length()];
        for(int i = 0; i < word.length(); i++){
            if(i % 2 == 0){
                evenLetters[i] = word[i];
            }
            else{
                oddLetters[i] = word[i];
            }
            
        }
        
        for(int i = 0; i < word.length(); i++){
            if(i % 2 == 0){
                std::cout << evenLetters[i];
            }
        }
        
        std::cout << " ";
        
        for(int i = 0; i < word.length(); i++){
            if(i % 2 != 0){
                std::cout << oddLetters[i];
            }
        }
        
        std::cout << std::endl;
        delete[] evenLetters;
        delete[] oddLetters;    
    }
    
    
    return 0;
}
