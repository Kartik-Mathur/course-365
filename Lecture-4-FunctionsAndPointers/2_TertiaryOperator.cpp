#include <iostream>
using namespace std;

int main(){

	int a = 5;

	// Print the values directly
	a%2 == 0 ? cout << "Even\n" : cout << "Odd\n";

	// It can be used to assign values as well
	bool isEven = (a%2 == 0 ? true : false);

	if(isEven){
		cout << "Even hai\n";
	}
	else{
		cout << "Odd hai\n";
	}

	return 0;
}
















