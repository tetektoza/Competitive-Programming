#include <iostream>




int main(){

	int n, p, v, t;
	std::cin >> n;
	int sum;
	int problems_solved = 0;
	for(int i = 0; i < n; i++){
		sum = 0;
		std::cin >> p >> v >> t;
		sum = p + v + t;
		if(sum >= 2){
			problems_solved++;
		}
	}

	std::cout << problems_solved << std::endl;


	return 0;
}
