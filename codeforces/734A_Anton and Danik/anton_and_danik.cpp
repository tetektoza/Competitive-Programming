#include <iostream>
#include <string>

int main(){
	int n, a = 0, d = 0;
	std::string wins;
	std::cin >> n >> wins;
	for(int i = 0; i < n; i++){
		if(wins[i] == 'D'){
			d++;
		}
		else{
			a++;
		}
	}

	if(a < d){
		std::cout << "Danik" << std::endl;
	}
	else if(a > d){
		std::cout << "Anton" << std::endl;
	}
	else{
		std::cout << "Friendship" << std::endl;
	}


	return 0;
}
