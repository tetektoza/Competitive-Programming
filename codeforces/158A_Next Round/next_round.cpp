#include <iostream>

int main(){

	int n, k;
	std::cin >> n >> k;
	auto *winners_scores = new int[n];
	for(int i = 0; i < n; i++){
		std::cin >> winners_scores[i];
	}

	int next_round_contestants = 0;
	for(int i = 0; i < n; i++){
		if(winners_scores[i] >= winners_scores[k - 1] && winners_scores[i] > 0){
			next_round_contestants += 1;
		}
	}

	std::cout << next_round_contestants << std::endl;
	
	delete[] winners_scores;
	return 0;
}
