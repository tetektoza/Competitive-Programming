#include <iostream>

int main(){
	int n;	
	std::cin >> n;
	if(n>1){
		printf("I hate that ");
		for(int i = 1; i < n; i++){
			if(i % 2 != 0 && i+1 == n){
				printf("I love it ");
			}
			else if(i % 2 != 0 && i+1 < n){
				printf("I love that ");
			}
			else if(i % 2 == 0 && i+1==n){
				printf("I hate it ");
			}
			else{
				printf("I hate that ");
			}
		}
	}
	else{
		printf("I hate it");
	}
	return 0;
}
