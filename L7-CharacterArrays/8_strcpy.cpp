#include <iostream>
#include <cstring> // strcpy
using namespace std;

void copy(char *a,char *b){
	int lenb = strlen(b);

	for (int i = 0; i <= lenb; ++i)
	{
		a[i] = b[i];
	}
}

int main(){

	char a[100] = "Hello";
	char b[] = "Coding Blocks";

	cout << a << endl; // Hello

	// a[] mei b[] copy kardo...
	// copy(a,b);
	strcpy(a,b); // Inbuilt function
	cout << a << endl; // Coding Blocks

	return 0;
}
















