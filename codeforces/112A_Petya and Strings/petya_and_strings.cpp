#include <bits/stdc++.h>
	

int main(){
	
	int flag = 0;
	std::string first, second;
	std::cin >> first >> second;
	
	for(int i = 0; i < first.length(); i++){

		if(first[i] < 97){
			first[i] += 32;
		}
		if(second[i] < 97){
			second[i] += 32;
		}
		

		if(first[i] > second[i]){
			flag = 1;
			break;
		}
		else if(first[i] < second[i]){
			flag = 2;
			break;
		}
	

	}
	

	if(flag == 1){
		std::cout << 1;
	}
	else if(flag == 2){
		std::cout << -1;
	}
	else{
		std::cout << 0;
	}

	return 0;
	
}
