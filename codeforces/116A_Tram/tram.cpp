#include <iostream>

int main(){

	int n;
	std::cin >> n;
	int a, b;
	int cap = 0;
	int passengers = 0;
	for(int i = 0; i < n; i++){
		std::cin >> a >> b;
		if(i == 0){
			passengers = a + b;
			cap = passengers;
		}
		else{
			passengers = passengers - a + b;
			if(cap < passengers){
				cap = passengers;
			}
		}
	}
	
	std::cout << cap << std::endl;

	return 0;
}
