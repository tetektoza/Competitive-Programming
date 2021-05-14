#include <iostream>

int main(){

	int x;
	std::cin >> x;
	int sum = 0;
	int max_val = 5;
	int count_steps = 0;
	while(sum < x){
		if(x >= (sum+max_val)){
			sum += max_val;
			count_steps++;
		}
		else{
			max_val--;
		}
	}
	
	std::cout << count_steps << std::endl;

	return 0;
}

