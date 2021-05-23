#include <bits/stdc++.h>
typedef long long ll;
#define forfrom0(i, n) for(int i = 0; i < n; i++)

void test(){
	int n;
	std::cin >> n;
	std::string s;
	ll total = 0;
	forfrom0(i, n){
		std::cin >> s;

		if(s[0] == 'D'){
			total += 12;
		}
		else if(s[0] == 'T'){
			total += 4;
		}
		else if(s[0] == 'I'){
			total += 20;
		}
		else if(s[0] == 'C'){
			total += 6;
		}
		else{
			total += 8;
		}
	
	}

	std::cout << total;
}


int main(){
	std::ios::sync_with_stdio(0);
	test();

	return 0;
	
}
