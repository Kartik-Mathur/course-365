#include <iostream>
using namespace std;

int main(){

	int a[] = {2, 3, 8, 1, 7};
	int n = sizeof(a)/sizeof(int);

	for (int i = 0; i < n ; ++i)
	{
		int mi = i;
		
		for(int j = i + 1; j < n ; j++){
			if(a[j] < a[mi]){
				mi = j;
			}
		}

		swap(a[i], a[mi]);
	}


	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;



	return 0;
}
















