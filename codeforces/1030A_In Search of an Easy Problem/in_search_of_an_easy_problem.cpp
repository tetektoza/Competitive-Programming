#include <iostream>

int main(){
	
	int n, easy_or_not, flag = 0;
	std::cin >> n;
	for(int i = 0; i < n; i++){
		std::cin >> easy_or_not;
		if(easy_or_not){
			flag = 1;
		}
	}
	
	if(flag){
		printf("HARD");
	}
	else{
		printf("EASY");
	}
	
	return 0;
}
