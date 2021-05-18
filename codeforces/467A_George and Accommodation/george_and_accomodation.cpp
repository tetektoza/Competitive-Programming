#include <iostream>

int main(){
	int n, p, q;
	std::cin >> n;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		std::cin >> p >> q;
		if(q <= p){
			continue;
		}
		else if(p <= q-2){
			cnt++;
		}
	}	

	std::cout << cnt << std::endl;

	return 0;
}
