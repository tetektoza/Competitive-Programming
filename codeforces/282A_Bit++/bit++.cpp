#include <iostream>
#include <string>

int main(){
	
	int n;
	std::cin >> n;
	int x = 0;
	for(int i = 0; i < n; i++){
		std::string str;
		std::cin >> str;
		for(int i = 0; i < str.length(); i++){
			if(str[i] == '-'){
				x--;
				break;
			}
			else if(str[i] == '+'){
				x++;
				break;
			}
		}

	}

	std::cout << x;	

	return 0;
}
