#include <iostream>

long long int f(long long int n){
	
	long long int result = 1337;
	if(n % 2 != 0){
		result = -(n+1)/2;
	}
	else{
		result = n/2;
	}

	return result;
}


int main(){
	long long int n;
	std::cin >> n;
	long long int z = f(n);
	printf("%lld", z);

	return 0;
}
