#include <iostream>
using namespace std;

int main(){

	int a[] = {1, 21, 13, -4, 5};
	int n = sizeof(a)/sizeof(int);
	/*
		int a[1000];
		cout << "Enter n (max: 1000) : ";
		
		int n;
		cin>>n;

		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
	*/

	// Maximum Code
	int mx = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		if(a[i] > mx){
			mx = a[i];
		}
	}

	cout << "Largest : "<<mx<<endl;

	// Find minimum

	int mi = INT_MAX;

	for (int i = 0; i < n; ++i)
	{
		if(a[i] < mi){
			mi = a[i];
		}
	}

	cout << "Minimum : "<<mi<<endl;


	return 0;
}
















