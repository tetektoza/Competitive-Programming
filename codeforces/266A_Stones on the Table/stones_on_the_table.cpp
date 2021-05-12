#include <iostream>
#include <string>

int main(){
	
	std::string word;
	int n;
	std::cin >> n;
	std::cin >> word;
	int count = 0;
		for(int j = 0; j < n - 1; j++){
			if(word[j] == word[j+1]){
				count++;
			}
			else if(word[j] != word[j+1] && count >= n-1){
				break;
			}
			else{
				continue;
			}
		}
	
	std::cout << count << std::endl;

	return 0;
}	
