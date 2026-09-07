#include <iostream>
using namespace std;

string keys[10] = {
	"Zero", "One","Two","Three","Four","Five","Six","Seven", "Eight", "Nine"
};

void print(int n){
	// base case
	if(n == 0){
		return;
	}

	print(n/10);
	int digit = n%10;
	cout << keys[digit] << " ";	
}

int main(){

	int n = 2048;

	print(n);	
	cout << endl;
	// 8 4 0 2
	// 2 4 0 8

	return 0;
}
















