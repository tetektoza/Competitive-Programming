#include <iostream>
 
int main(void)
{
	int n;
	std::cin >> n;
	std::string str = "";
	bool switch_letter = true;
	int count_b = 2;
	while (n--)
	{
		if (switch_letter) {
			str += "b";
			count_b--;
			if (!count_b) {
				switch_letter = false;
			}
		}
		else {
			str += "a";
			count_b++;
			if (count_b == 2)
				switch_letter = true;
		}
	}
 
	std::cout << str << std::endl;
 
	return 0;
}

