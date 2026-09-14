#include <iostream>
using namespace std;

int* createArray(){
	int *arr = new int[5];

	for (int i = 0; i < 5; ++i)
	{
		arr[i] = i + 1;
	}

	return arr;
}

int main(){

	int *a = createArray();
	for (int i = 0; i < 5; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	delete []a;
	a = NULL;

	return 0;
}
















