#include <iostream>
using namespace std;

int main(){

	char a[100];

	// cin automatically NULL add kr deta hai
	// cin >> a; // white space characters ko ignore krta hai // input : hello world
	// cout << a << endl; // output: hello


	// Input with whitespace characters
	// cin.getline(a, 100); // by default jab tak '\n' nhi aata tab tak read krega
	
	// cin.getline(a, 100, '$'); // will read till $ is provided as input
	
	cin.getline(a, 5, '$'); // will read only 4 characters as last wala '\0' hoga
	// input: hello world$

	cout << a << endl; // hell

	return 0;
}
















