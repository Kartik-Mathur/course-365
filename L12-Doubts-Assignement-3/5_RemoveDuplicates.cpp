#include <iostream>
using namespace std;

int main(){

	char a[100000];
	cin>>a;

	int i = 0, j = 1;

	while(a[j] != '\0'){
		if(a[i] == a[j]){
			j++;
		}
		else{
			i++;
			a[i] = a[j];
			j++;
		}
	}

	a[i+1] = '\0';
	cout << a << endl;

	return 0;
}
















