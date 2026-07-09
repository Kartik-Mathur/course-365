#include <iostream>
using namespace std;

char a[][10] = {
	"Zero",
	"One",
	"Two",
	"Three",
	"Four",
	"Five",
	"Six",
	"Seven",
	"Eight",
	"Nine",
};

void intToString(int n){
	// base case
	if(n == 0){
		return; // We cannot do anything return back
	}

	// recursive case
	int ld = n%10;

	cout << a[ld] << " ";	
	intToString(n/10);
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		 

	

	intToString(2048);


	return 0;
}
















