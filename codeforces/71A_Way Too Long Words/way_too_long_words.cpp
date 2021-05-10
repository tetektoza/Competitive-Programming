#include <iostream>
#include <string>

int main(){

	int n;
	std::cin >> n;
	for(int i = 0; i < n; i++){

		std::string str;
		std::cin >> str;
	
		if(str.length() > 10){
			int count = 0;
			std::cout << str[0];
			for(int i = 1; i < str.length() - 1; i++){
				count += 1;
			}
			std::cout << count << str[str.length() - 1] << std::endl;
		}
		else{
			std::cout << str << std::endl;
		}
	}

	return 0;
}
