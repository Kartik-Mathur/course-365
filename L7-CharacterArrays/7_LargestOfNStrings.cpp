#include <iostream>
using namespace std;

int main(){

	char largest[100];
	int largest_len = 0;

	int n;
	cin>>n;

	cin.ignore(); // mandatory hai if we use cin.getline after cin>>n;

	for (int i = 0; i < n; ++i)
	{
		char a[100];
		cin.getline(a,100);

		int lena = strlen(a);
		
		if(lena > largest_len){
			
			strcpy(largest, a);
			largest_len = lena;

		}

			
	}

	cout << "Largest string: " << largest << endl;
	cout << "Largest length: " << largest_len << endl;


	return 0;
}
















