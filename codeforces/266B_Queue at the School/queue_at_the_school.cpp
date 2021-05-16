#include <iostream>

int main(){

	int n, t, tmp;
	std::string queue;
	std::cin >> n >> t;
	std::cin >> queue;
	for(int i = 0; i < t; i++){
		for(int j = 0; j < n-1; j++){
			if(queue[j+1] == 'G' && queue[j] == 'B'){
				tmp = queue[j];
				queue[j] = queue[j+1];
				queue[j+1] = tmp;
				j++;
			}
		}
	}

	std::cout << queue << std::endl;



	return 0;
}
