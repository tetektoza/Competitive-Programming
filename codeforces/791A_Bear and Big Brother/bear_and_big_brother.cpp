#include <iostream>

int main(){

	int limak, bob;
	std::cin >> limak >> bob;
	int count = 0;
	while(limak <= bob){
		limak *= 3;
		bob *= 2;
		count++;
	}

	std::cout << count << std::endl;



	return 0;
}
