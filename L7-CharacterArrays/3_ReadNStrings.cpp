#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	cin.ignore(); // mandatory hai if we use cin.getline after cin>>n;

	for (int i = 0; i < n; ++i)
	{
		char a[100];
		cin.getline(a,100);

		cout << i<<"th String : "<<a << endl;
	}


	return 0;
}
















