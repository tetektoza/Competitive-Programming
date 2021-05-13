#include <iostream>

int main(){
	
	int k, n, w;
	std::cin >> k >> n >> w;
	
	int total_money_to_spend = 0;
	for(int i = 1; i <= w; i++){
		total_money_to_spend += i * k;
	}

	
	if(n < total_money_to_spend){
		int money_to_borrow = total_money_to_spend - n;
		std::cout << money_to_borrow << std::endl;
	}
	else{
		std::cout << 0 << std::endl;
	}
	

	return 0;
}
