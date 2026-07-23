#include <iostream>
using namespace std;

int main(){

	int a = 1;

	int *x = &a;

	cout << &a << endl;
	cout << x << endl;

	char ch = 'A';

	// To print the address of character bucket we need to fool the cpp compiler
	cout << (int *)&ch << endl; // isko explicitly boldo ki jo address hai vo int ka h

	char *y = &ch;

	cout << (void*)y << endl;
	cout << (float*)y << endl;

	cout << 'A' <<endl;
	cout << (int)'A' <<endl;

	int *z;
	cout << z <<endl;


	return 0;
}
















