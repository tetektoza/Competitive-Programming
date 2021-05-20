#include <iostream>


int main(){

	std::string line_one, line_two, result;
	std::cin >> line_one >> line_two;
	for(int i = 0; i < line_one.length(); i++){
		if((line_one[i] == '0' && line_two[i] == '1')
			|| (line_one[i] == '1' && line_two[i] == '0')){
			result += '1';
		}
		else{
			result += '0';	
		}
	}

	
	std::cout << result << std::endl;
	


	return 0;
}
