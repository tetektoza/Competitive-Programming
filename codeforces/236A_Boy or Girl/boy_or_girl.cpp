#include <iostream>

int main(){
	
	std::string username;
	std::cin >> username;
	
	int distinct = 0;
	int count = 0;
	for(int i = 0; i < username.length(); i++){
		count = 0;
		for(int j = 0; j < username.length(); j++){
			if(i == j){
				continue;
			}
			else if((username[i] != username[j]) || username[i] == username[j] && i < j){
				count++;
			}
		}
		
 

		if((count - username.length()) == -1){
			distinct++;
		}
	}
	

	if(distinct % 2 == 0){
		std::cout << "CHAT WITH HER!" << std::endl;
	}
	else{
		std::cout << "IGNORE HIM!" << std::endl;
	}

	return 0;
}
