#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){
	int input, d, flag = 0;
	auto types_of_damages = new int[4];
	for(int i = 0; i < 4; i++){
		scanf("%d", &input);
		types_of_damages[i] = input;
		if(types_of_damages[i] == 1){
			flag = 1;
		}
	}
	
	scanf("%d", &d);
	auto arr_damaged = new int[d+1];	
	memset(arr_damaged, 0, (d+1)*sizeof(*arr_damaged));
	int sum = 0, i = 0;
	if(flag == 0){
		while(i < 4){
			sum += types_of_damages[i];
			if(sum > d){
				i++;
				sum = 0;
				continue;
			}
			arr_damaged[sum] = sum;
		}
	}
	else{
		printf("%d", d);
	}
	
		
	if(flag == 0){
		sum = 0;
		for(int i = 1; i < d+1; i++){
			if(arr_damaged[i] != 0){
				sum++;
			}
		}
		printf("%d", sum);
	}


	delete[] arr_damaged;
	return 0;
}
