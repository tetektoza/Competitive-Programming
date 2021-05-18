#include <iostream>

int main(){
	
	int y;
	std::cin >> y;
	int divideri = 1, dividerj = 1, digit, cnt = 0;
	while(true){
		y++;
		
		divideri = 1;
		for(int i = 0; i < 4; i++){

			if(i > 0){
				divideri *= 10;
			}

			digit = (y/divideri) % 10;

			dividerj = divideri * 10;

			for(int j = i + 1; j < 4; j++){
				
				if(digit != (y/dividerj) % 10){
					cnt++;
				}

				dividerj *= 10;				
			}
		}
		
		if(cnt == 6){
			break;
		}

		cnt = 0;

	}


	std::cout << y << std::endl;
	return 0;
}
