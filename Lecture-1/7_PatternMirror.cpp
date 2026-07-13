#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	for(int row = 1 ; row <= n ; row++){
		// 1. Spaces
		// Write a loop that runs n-row times
		for(int i = 1 ; i<= n-row; i++){
			cout << ' ' << ' ';
		}

		// 2. Increasing numbers
		for(int i = 1 ; i <= row ; i++){
			cout << i << ' ';
		}

		// 3. Decreasing numbers
		int no = row - 1; // yaha se number print krne shuru hoge
		for(int i = 1; i <= row - 1; i++){ // loop lagaya row -1 times
			cout << no <<' ';
			no--; // no ko decrease kardo after printing it
		}

		cout << endl;
	}


	// Mirror pattern
	for(int row = n-1;row>=1;row--){
		// 1. Spaces
		// Write a loop that runs n-row times
		for(int i = 1 ; i<= n-row; i++){
			cout << ' ' << ' ';
		}

		// 2. Increasing numbers
		for(int i = 1 ; i <= row ; i++){
			cout << i << ' ';
		}

		// 3. Decreasing numbers
		int no = row - 1; // yaha se number print krne shuru hoge
		for(int i = 1; i <= row - 1; i++){ // loop lagaya row -1 times
			cout << no <<' ';
			no--; // no ko decrease kardo after printing it
		}

		cout << endl;
	}

	return 0;
}
















