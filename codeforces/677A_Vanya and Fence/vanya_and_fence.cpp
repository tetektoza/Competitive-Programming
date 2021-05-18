#include <iostream>

int main(){
	
	int n, h, pers_h, width = 0;
	std::cin >> n >> h;
	for(int i = 0; i < n; i++){
		std::cin >> pers_h;
		if(pers_h > h){
			width += 2;
		}
		else{
			width++;
		}
	}

	std::cout << width << std::endl;
	return 0;
}
