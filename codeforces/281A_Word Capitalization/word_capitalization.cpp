#include <iostream>
#include <string>

int main(){
	
	std::string word;
	std::cin >> word;
	if(word[0] > 90){
		char single_char = word[0] - 32;
		word[0] = single_char;
	}
	
	std::cout << word << std::endl;

	return 0;
}	
