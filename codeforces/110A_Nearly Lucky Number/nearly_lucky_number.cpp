#include <iostream>



int main(){

	unsigned long long int n;
	std::cin >> n;
	
	unsigned long long int divisor = 1;
	unsigned long long int cont = n / divisor, count = 0;
	while(cont > 1){
		cont = n / divisor;
		if((cont % 10) == 4 || (cont % 10) == 7){
			count++;
		}
		divisor *= 10;
	}
	
	if(count != 7 && count != 4){
		std::cout << "NO" << std::endl;
	}
	else{
		std::cout << "YES" << std::endl;
	}
	return 0;
}
