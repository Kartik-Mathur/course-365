#include <iostream>
using namespace std;

void print(char *a){
	// character array ke saath size pass nhi krna hota
	for(int i = 0; a[i] != '\0' ; i++){
		cout << a[i] << '_';
	}
	cout << endl;
}

int main(){

	char a[6] = "Hello";


	cout << a << endl;

	for(int i = 0; a[i] != '\0' ; i++){
		cout << a[i] << ' ';
	}
	cout << endl;

	print(a);

	return 0;
}
















