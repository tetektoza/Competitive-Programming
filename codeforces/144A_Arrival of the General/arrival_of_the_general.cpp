#include <iostream>

int main(){
	int n, s;
	scanf("%d", &n);	
	auto soldiers = new int[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &s);
		soldiers[i] = s;
	}
	
	int index_min = 0, index_max = 0;

	for(int j = 0; j < n; j++){
		if(soldiers[index_max] < soldiers[j]){
			index_max = j;
		}
			
		if(soldiers[index_min] >= soldiers[j]){
			index_min = j;
		}

	}
	
	int swaps_max, swaps_min;	
	swaps_min = (n-1) - index_min;	
	swaps_max = index_max;

	if(index_min < index_max){
		index_max = (swaps_max + swaps_min)-1;
	}
	else{
		index_max = swaps_max + swaps_min;
	}

	printf("%d", index_max);
	

	delete[] soldiers;
	return 0;
}
