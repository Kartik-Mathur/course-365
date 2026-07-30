#include <iostream>
#include <cstring> // strlen
using namespace std;

int length(char *a){
	int i;

	for(i = 0 ; a[i] != '\0'; i++){

	}

	return i;
}

int main(){

	char a[100] = "Hello";
	// cout << sizeof(a) <<endl; // 100 aaega ismei
	cout << length(a) << endl; // 5 aaega ismei, user defined function hai..
	cout << strlen(a) << endl; // yeh inbuilt hai function..


	return 0;
}
















