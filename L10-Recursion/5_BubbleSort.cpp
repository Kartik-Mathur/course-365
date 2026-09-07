#include <iostream>
using namespace std;

void bubbleSort(int *a,int n, int i){
	if(i == n-1){
		return; // this means saare elements sort ho chuke honge vapis jaao
	}

	// Ek element ko sahi jagah hum rakh dete hai
	for (int j = 0; j < n-1-i ; ++j)
	{
		if(a[j] > a[j+1]){
			swap(a[j], a[j+1]);
		}
	}

	bubbleSort(a,n,i+1);
}

int main(){

	int a[] = {5,2,1,4,3};
	int n = sizeof(a)/sizeof(int);

	bubbleSort(a,n,0);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

	return 0;
}
















