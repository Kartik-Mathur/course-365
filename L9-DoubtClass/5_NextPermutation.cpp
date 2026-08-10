#include <iostream>
#include <algorithm>
using namespace std;

void reverseArray(int *a,int i,int j){

	while(i<j){
		swap(a[i], a[j]);
		i++;
		j--;
	}

}

int main(){

	int a[100000];
	int n;

	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	int i,j;

	for(i = n - 2 ; i >= 0; i--){
		if(a[i] < a[i+1]){
			break;
		}
	}	

	if(i == -1){
		// This means we have the highest permutation possible Example: [5,4,3,2,1] -> i => -1
		sort(a, a+n); // [1,2,3,4,5] will be the answer
	}
	else{

		for(j = n-1; j >= 0 ; j--){
			if(a[j] > a[i]){
				break;
			}
		}

		swap(a[i], a[j]);

		// reverse the index from [i+1, n-1]
		reverseArray(a, i+1, n-1);
	}


	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;





	return 0;
}
















