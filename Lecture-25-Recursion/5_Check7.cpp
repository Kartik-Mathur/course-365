#include <iostream>
using namespace std;

bool check7(int *a,int n){
	if(n == 0){
		// elements hi nhi bache toh 7 nhi ho skta
		return false; 
	}
	
	// 0th index ka kaam meine kar diya
	if(a[0] == 7) return true;	

	bool ans = check7(a+1,n-1);
	return ans; // true ya false chote array mei jo hai wahi return krenge
}

int firstIndex(int *a,int n){
	if(n == 0) return -1;

	if(a[0] == 7) return 0;

	int indx = firstIndex(a+1, n-1);

	if(indx == -1) {
		return -1;
	}
	else{
		return indx + 1;
	}
}

int last7(int *a,int n){
	if(n == 0) return -1;

	if(a[n-1] == 7) return n-1;

	int indx = last7(a,n-1);
	return indx;
}

void allIndex(int *a,int n,int i){
	if(i == n) return;

	if(a[i] == 7) cout << i << " ";

	allIndex(a,n,i+1);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		 
	int a[] = {1, 2, 7, 5, 6, 7,7};
	int n = sizeof(a)/sizeof(int);


	bool ans = check7(a,n);
	if(ans == true) cout << "true\n";
	else cout << "false\n";

	cout << firstIndex(a, n) << endl;
	cout << last7(a,n) << endl;
	allIndex(a,n,0);


	return 0;
}
















