#include <bits/stdc++.h>
	

int main(){

	std::string guest, host, pile;
	std::cin >> guest >> host >> pile;
	auto flag_list = new int[pile.length()];

	int cnt_guest = 0, cnt_host = 0;
	for(int i = 0; i < guest.length(); i++){
		for(int j = 0; j < pile.length(); j++){
			if(guest[i] == pile[j] && flag_list[j] != 1){
				flag_list[j] = 1;
				cnt_guest++;
				break;
			}
		}
	}

	for(int i = 0; i < host.length(); i++){
		for(int j = 0; j < pile.length(); j++){
			if(host[i] == pile[j] && flag_list[j] != 1){
				flag_list[j] = 1;
				cnt_host++;
				break;
			}
		}
	}

	if(cnt_guest == guest.length()
	 && cnt_host == host.length()
	 && (cnt_host + cnt_guest) == pile.length()){
		std::cout << "YES";
	}
	else{
		std::cout << "NO";
	}
	
	delete[] flag_list;
	return 0;
	
}
