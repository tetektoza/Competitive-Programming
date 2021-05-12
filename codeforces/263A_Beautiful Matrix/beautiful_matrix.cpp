#include <iostream>
#include <cstdio>
#include <cmath>

int main(){
	int count_lines = 0;
	int count = 0;
	int line_that_contains_one = 0;
	int col_that_contains_one = 0;
	int final_result = 0;
	for(int i = 0; i < 5; i++){
		char input[11];
		char line[6];
		gets(input);
		count = 0;
		count_lines++;
		for(int j = 0; j < 9; j++){
			if(input[j] != ' '){
				line[count++] = input[j];
			}
		}

		for(int j = 0; j < 6; j++){
			if(line[j] == '1'){
				col_that_contains_one = j;
				line_that_contains_one = count_lines;
			}
		}
	}
	
	line_that_contains_one = abs(3 - line_that_contains_one);
	col_that_contains_one = abs(2 - col_that_contains_one);
	final_result = line_that_contains_one + col_that_contains_one;

	std::cout << final_result << std::endl;




	return 0;
}	
