#include <iostream>
#include <string>

int main(){
	
	std::string sorted = "";
	std::string unsorted = "";
	std::string numbers;
	std::cin >> numbers;
	for(int i = 0; i < numbers.length(); i++){
		if(numbers[i] != '+'){
			unsorted += numbers[i];
		}
	}
		
	char tmp;
	for(int x = 0; x < unsorted.length(); x++){
		for(int i = 0; i < unsorted.length() - 1; i++){
			if(unsorted[i] > unsorted[i+1]){
				tmp = unsorted[i+1];
				unsorted[i+1] = unsorted[i];
				unsorted[i] = tmp;
			}
		}
	}

	int count = 0;
	for(int i = 0; i < (unsorted.length()*2)-1; i++){
		if(i % 2 == 0){
			sorted += unsorted[count++];
		}
		else{
			sorted += '+';
		}
	}

	std::cout << sorted << std::endl;

	return 0;
}	
