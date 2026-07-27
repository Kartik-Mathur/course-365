#include <iostream>
using namespace std;

int binarySearch(int *a,int n,int key){
	int s = 0, e = n - 1;
	while(s <= e){
		int mid = (s+e)/2;
		if(a[mid] == key){
			return mid;
		}
		else if(a[mid] >= a[n-1]){
			// We are SR - 1
			if(a[s] <= key and key <= a[mid]){
				e = mid - 1;
			}
			else{
				s = mid + 1;
			}
		}
		else{
			// We are SR - 2
			if(a[mid] <= key and key <= a[e]){
				s = mid + 1;
			}
			else{
				e = mid - 1;
			}
		}
	}

	return -1;
}

int main(){

	int a[] = {5, 8, 9, 12, 1, 3, 4};
	int n = sizeof(a)/sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

	int key;
	cin>>key;

	
	cout << binarySearch(a, n, key) << endl;



	return 0;
}
















