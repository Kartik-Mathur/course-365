#include <iostream>
using namespace std;

int main(){

/*
	int a = 0,b = 1, c;


	cout << a << ' ';
	cout << b << ' ';

	for (int i = 0; i < 8; ++i)
	{
		c = a + b;
		cout << c << ' ';

		a = b;
		b = c;
	}
*/
	int n;
	cin>>n;

	if(n >= 1){
		cout << 0 <<endl; 
	}

	if(n >= 2){
		cout << 1 << '\t' << 1 << endl;
	}

	if(n >= 3){
		int a = 1,b = 1, c;

		for(int row = 3 ; row <= n ; row++){
			
			// row times fibonacci numbers print karne hai merko
			for(int j = 1 ; j <= row; j++){
				c = a + b;
				cout << c << '\t';

				a = b;
				b = c;
			}

			cout << endl;
		}
		
	}
	
	return 0;
}
















