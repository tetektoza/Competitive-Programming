#include <iostream>
#include <string>

int main(){
	std::string s, t;
	std::cin >> s;
	std::cin >> t;
	int t_len = t.length() - 1, flag = 0;
	for(int i = 0; i < t.length(); i++){
		if(s[i] != t[t_len]){
			flag = 1;
			break;
		}
		t_len--;
	}

	if(flag == 1){
		std::cout << "NO" << std::endl;
	}
	else{
		std::cout << "YES" << std::endl;
	}


	return 0;
}
