#include <iostream>
#include <cstring>
using namespace std;

// Character arrays are passed by reference
void update(char *x){
	strcpy(x, "Meri New String");
	return;
}

int main(){
	// array ka size batana padega
	char a[100] = "Hello";

	// a = "World"; // Wont work
	strcpy(a, "World");
	cout << a << endl;

	// a += "Hello"; // Wont work
	strcat(a, "Hello");
	cout << a << endl;

	cout << strlen(a) << endl;
	update(a);
	cout << a << endl;

	char x[] = "turtle";
	char y[] = "alligator";

	/*
	strcmp(a,b) < 0, if a < b
	strcmp(a,b) == 0, if a == b
	strcmp(a,b) > 0, if a > b
	*/
	if(strcmp(x,y) > 0){
		cout << x << " is bigger dictionary wise\n";
	}
	else{
		cout << y << " is bigger dictionary wise\n";
	}
	return 0;
}
















