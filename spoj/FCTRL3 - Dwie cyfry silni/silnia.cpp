#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int j = 0; j < n; j++){
        int result = 1;
        int a;
        cin >> a;
	    if(a < 0){
	        result = 0;
	    }
	    else if(a > 9){
	        result = 0;
	    }
	    else{
		    for(int i = 1; i <= a; i++){
		        result *= i;
		    }
	    }
	    std::cout << (result/10) % 10 << " " << (result) % 10 << std::endl;
    }

    
    return 0;
}
