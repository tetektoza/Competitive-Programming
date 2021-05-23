#include <iostream>

int main(){
	int t, a, b, swaps = 0, divisor = 0;

	scanf("%d", &t);

	for(int i = 0; i < t; i++){

		std::cin >> a >> b;
		swaps = 0;
		divisor = 0;

		if(a % b != 0){
			if(a > b){
				divisor = (a/b)+1;
				swaps = (a - b*divisor);
				swaps = -swaps;
			}
			else{
				swaps = -(a - b);
			}
			
		}

		std::cout << swaps << std::endl;

	}	

	return 0;
}
