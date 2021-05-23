#include <iostream>
#include <string>
int main(){
	int n, letter, cnt = 0;
	std::string word;

	scanf("%d\n", &n);
	getline(std::cin, word);
	
	letter = 64;
	
	for(int i = 0; i < 26; i++){
		letter++;
		for(int j = 0; j < n; j++){
			if((int)word[j] == letter || (int)word[j] == (letter + 32)){
				cnt++;
				break;	
			}
		}
	}
	
	if(cnt==26){
		printf("YES");
	}
	else{
		printf("NO");
	}

	return 0;
}
