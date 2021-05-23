#include <iostream>

int main(){
	int n, tmp;
	scanf("%d", &n);
	auto home_unif = new int[n];
	auto guest_unif = new int[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &tmp);
		home_unif[i] = tmp;
		scanf("%d", &tmp);
		guest_unif[i] = tmp;
	}
	
	tmp = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(home_unif[i] == guest_unif[j]){
				tmp++;
			}
		}
	}	

	printf("%d", tmp);

	return 0;
}
