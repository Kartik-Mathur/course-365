#include <iostream>
using namespace std;

void inputString(char *a,int s, char x){
	// x vo character hai jaha tak input lena hai....

	char ch =cin.get();
	int i = 0;
	while(i < s - 1 and ch != x){ // i will keep a track of total characters
		// ch will ensure x se compare krke kab characters input karna stop krna h

		a[i] = ch;
		i++;

		ch = cin.get();
	}

	a[i] = '\0';

}

int main(){

	char a[1000];

	inputString(a, 100, '$');

	cout << a << endl;



	return 0;
}
















