#include <iostream>
using namespace std;

void pairSum(int arr[],int n,int x){
	// nested loops

	for (int i = 0; i < n; ++i)
	{
		int a = arr[i];
		int b = x - a;

		for (int j = i+1; j < n ; ++j)
		{
			if(arr[j] == b){
				cout << a << ", "<<b<<endl;
			}
		}
		
	}
}

int main(){

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);


	int x = 7;

	pairSum(a,n,x);

	return 0;
}
















