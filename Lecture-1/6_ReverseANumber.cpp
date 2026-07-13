#include <iostream>
using namespace std;

int main(){

	int n;
	int ans = 0;

	for(cin >> n ; n != 0 ; n/=10){
		int ld = n%10;

		ans = ans * 10 + ld;
	}

/*
	while(n != 0){
		int ld = n%10;

		ans = ans * 10 + ld;

		n /= 10;
	}
*/
	cout << ans << endl;

	return 0;
}
















