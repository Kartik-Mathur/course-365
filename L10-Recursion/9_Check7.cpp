#include <iostream>
using namespace std;

bool check7(int *a,int n){
	// base case
	if(n == 0){
		return false; // no elements means 7 nhi hai
	}

	// recursive case
	if(a[0] == 7){
		return true; // agar pehli bucket par hai toh done mill gaya
	}

	bool choteArrayMeiHai = check7(a+1,n-1);
	
	if(choteArrayMeiHai == true){
		return true;
	}
	else{
		return false;
	}
}

int main(){

	int a[] = {1, 2, 3, 7,4, 5};
	int n = sizeof(a)/sizeof(int);


	if(check7(a,n) == true){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}

	return 0;
}
















