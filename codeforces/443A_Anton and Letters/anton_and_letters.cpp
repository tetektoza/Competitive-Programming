#include <iostream>
#include <string>

int main(){
	
	std::string letters;
	getline(std::cin, letters);

	auto flag_list = new int[letters.length()];
	int cnt = 0;

	
	if(letters.length() > 2){
		for(int i = 1; i < letters.length()-1; i += 3){
			for(int j = 1; j < letters.length()-1; j += 3){
				if(flag_list[i] != 1){
					cnt++;
					flag_list[i] = 1;
				}

				if(letters[i] == letters[j]){
					flag_list[j] = 1;
				}


			}
		}
	}


	std::cout << cnt;
	

	delete[] flag_list;

	return 0;
}
