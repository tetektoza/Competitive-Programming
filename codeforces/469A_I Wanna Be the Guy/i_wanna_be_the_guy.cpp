#include <iostream>


int main(){

	int n, size_x, size_y, p, q;
	scanf("%d", &n);
	scanf("%d", &size_x);
	auto arr_x = new int[size_x];
	for(int i = 0; i < size_x; i++){
		scanf("%d", &p);
		arr_x[i] = p;
	}

	scanf("%d", &size_y);
	auto arr_y = new int[size_y];

	for(int i = 0; i < size_y; i++){
		scanf("%d", &q);
		arr_y[i] = q;
	}
	

	int cnt = 0, i = 0;
	while(i < n){
		if(arr_x[i] == cnt + 1 && i < size_x){
			cnt++;
			i = 0;
			continue;
		}

		
		if(arr_y[i] == cnt + 1 && i < size_y){
			cnt++;
			i = 0;
			continue;
			}
		

		i++;
	}
	
	if(cnt == n){
		printf("I become the guy.");
	}
	else{
		printf("Oh, my keyboard!");
	}
	

	delete[] arr_x;
	delete[] arr_y;
	return 0;
}
