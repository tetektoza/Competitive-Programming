#include <iostream>
#include <string>

int main(){
	
	int n;
	std::string mag_field;
	std::cin >> n;
	auto magnets = new std::string[n];
	for(int i = 0; i < n; i++){
		std::cin >> mag_field;
		magnets[i] = mag_field;
	}
	
	int cnt_groups = 1;

	if(n > 1){
		for(int i = 0; i < n-1; i++){
			if(magnets[i][1] == magnets[i+1][0]){
				cnt_groups++;
			}
		}
	}

	std::cout << cnt_groups << std::endl;
	
	return 0;
}
