#include <iostream>

int main(){

	int n, p;
	std::cin >> n;
	auto friends = new int[n];
	auto friends_tmp = new int[n];
	for(int i = 0; i < n; i++){
		std::cin >> p;
		friends[i] = p;
		friends_tmp[i] = p;
	}
	
	int tmp;
	for(int i = 0; i < n; i++){
		tmp = friends[friends_tmp[i]-1];
		friends[friends_tmp[i]-1] = i+1;
		friends[friends_tmp[tmp-1]-1] = tmp;
	}

	for(int i = 0; i < n; i++){
		std::cout << friends[i] << " ";
	}

	return 0;
}
