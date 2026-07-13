#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;


	for(int row = 1 ;row <= n ; row++){

		char ch ='A';
		// 1. Print increasing characters
		for(int i = 1 ; i<=n-row+1; i++){
			cout << ch;
			ch++;
		}

		ch--;
		
		// 2. Print decreasing characters
		for(int i = 1 ; i <= n-row+1 ; i++){
			cout << ch;
			ch--;
		}

		cout << endl;
	}

	return 0;
}
















