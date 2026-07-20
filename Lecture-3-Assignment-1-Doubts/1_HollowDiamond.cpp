#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	for(int row = 1 ; row <= (n+1)/2 ; row++){
		if(row == 1){
			// print n times star
			for(int i = 1 ; i <= n ; i++){
				cout << "*\t";
			}
		}
		else{
			// 1. print (n-(2*row-3))/2 times star
			for(int i = 1 ; i <= (n-(2*row-3))/2 ; i++){
				cout << "*\t";
			}
			// 2. print (2row - 3) times space
			for(int i = 1; i <= 2*row - 3 ; i++){
				cout << " \t";
			}
			// 3. print (n-(2*row-3))/2 times star
			for(int i = 1 ; i <= (n-(2*row-3))/2 ; i++){
				cout << "*\t";
			}
		}

		cout << endl;
	}


	// Mirror pattern

	for(int row = (n+1)/2 - 1 ; row >= 1 ; row--){
		if(row == 1){
			// print n times star
			for(int i = 1 ; i <= n ; i++){
				cout << "*\t";
			}
		}
		else{
			// 1. print (n-(2*row-3))/2 times star
			for(int i = 1 ; i <= (n-(2*row-3))/2 ; i++){
				cout << "*\t";
			}
			// 2. print (2row - 3) times space
			for(int i = 1; i <= 2*row - 3 ; i++){
				cout << " \t";
			}
			// 3. print (n-(2*row-3))/2 times star
			for(int i = 1 ; i <= (n-(2*row-3))/2 ; i++){
				cout << "*\t";
			}
		}

		cout << endl;
	}

	return 0;
}
















