#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	for (int row = 1; row <= (n+1)/2; ++row)
	{
		if(row == 1){
			cout << '*';

			// print (n-3)/2 spaces
			for (int i = 0; i < (n-3)/2; ++i)
			{
				cout << ' ';
			}

			// (n+1)/2 stars
			for (int i = 0; i < (n+1)/2; ++i)
			{
				cout << '*';
			}

		}
		else if(row == (n+1)/2){
			for (int i = 0; i < n; ++i)
			{
				cout << '*';
			}
		}
		else{
			cout << '*';
			for (int i = 0; i < (n-3)/2; ++i)
			{
				cout << ' ';
			}
			cout << '*';
		}

		cout << endl;
	}



	// Lower part of ganesha pattern
	for(int row = 1 ; row < (n+1)/2 ; row++){
		if(row == (n-1)/2){
			// 1. print stars (n+1)/2
			for (int i = 0; i < (n+1)/2; ++i)
			{
				cout << '*';
			}
			// 2. print spaces (n-3)/2
			for (int i = 0; i < (n-3)/2; ++i)
			{
				cout << ' ';
			}
			// 3. cout << '*'
			cout << '*';
		}
		else{
			// print spaces (n-1)/2
			for (int i = 0; i < (n-1)/2; ++i)
			{
				cout << ' ';
			}
			// cout << '*'
			cout << '*';
			// print spaces (n-3)/2
			for (int i = 0; i < (n-3)/2; ++i)
			{
				cout << ' ';
			}
			// cout << '*'
			cout << '*';
		}

		cout << endl;
	}

	return 0;
}
















