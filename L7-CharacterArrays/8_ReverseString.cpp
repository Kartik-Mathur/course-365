#include <iostream>
#include <cstring>
#include <algorithm> // for inbuilt reverse function
using namespace std;

void reverseString(char *a){
	int i = 0, j = strlen(a) - 1;

	while(i < j){
		swap(a[i], a[j]);
		i++;
		j--;
	}

	return;
}

int main(){

	char a[] = "Hello";
	int n = strlen(a);
	// reverseString(a);
	reverse(a, a+n); // inbuilt
	cout << a << endl;


	return 0;
}
















