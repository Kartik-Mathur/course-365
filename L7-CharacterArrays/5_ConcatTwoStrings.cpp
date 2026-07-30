#include <iostream>
#include <cstring> // strcat
using namespace std;

void concat(char *a,char *b){
	int lena = strlen(a);
	int lenb = strlen(b);

	int i = lena, j;

	for(int j = 0 ; j <= lenb; j++){
		a[i] = b[j];
		i++;
	}
}	

int main(){


	char a[100] = "hello"; // you should have extra buckets in a[] to merge b[] in it
	char b[] = "world";

	// concat(a,b);
	// cout << a << endl;

	strcat(a,b); // inbuilt function to do concat two strings...
	cout << a <<endl;
	return 0;
}
















