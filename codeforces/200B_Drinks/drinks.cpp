#include <iostream>


int main(){
	int n;
	std::cin >> n;
	int fraction;
	double sum = 0.0;
	for(int i = 0; i < n; i++){
		std::cin >> fraction;
		sum += fraction/100.f;
	}
	
	sum = (sum/n)*100;
	printf("%f", sum);	

	return 0;
}
