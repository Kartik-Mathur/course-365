#include <iostream>
using namespace std;

int a = -1000;

int main(){

	int a = 1;


	if(a > 0){
		int x = -100;
		
		a = 20;

		cout << ::a <<endl;

		::a = ::a + 100;
		cout << ::a <<endl;
		
		cout << a << endl;

	}

	
	cout << a << endl;

	// cout << x << endl; // error dega

	return 0;
}
















