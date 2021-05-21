#include <iostream>

int main(){
	unsigned long int s;

	auto colours_arr = new unsigned long int[4];
	auto check_if = new int[4];
	for(int i = 0; i < 4; i++){
		scanf("%ld", &s);
		colours_arr[i] = s;
		check_if[i] = 0;
	}

	int min_horseshoes = 0, cnt = 0;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(j == i || check_if[j] == 1){
				cnt++;
				if(cnt > 6){
					goto end;
				}
				continue;
			}
			else if(colours_arr[i] == colours_arr[j]){
				min_horseshoes++;
				check_if[j] = 1;
				check_if[i] = 1;
			}
		}
	}
	
	end:
	printf("%d", min_horseshoes);

	return 0;
}
