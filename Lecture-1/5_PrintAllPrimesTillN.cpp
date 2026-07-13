#include <iostream>
using namespace std;

int main(){

	int n, i;
	cin>>n;


	for(int no = 2 ; no <= n ; no++){

		// Agar no is prime toh print karo else mat karo
		for(i = 2 ; i < no ; i++){

			if(no%i == 0){
			
				break;
			
			}
		
		}

		if(i == no){
			cout << no << " ";
		}

	}






	return 0;
}
















