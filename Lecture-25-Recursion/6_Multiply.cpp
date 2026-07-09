#include <iostream>
using namespace std;

int multiply(int a,int b){
	// base case
	if(b == 0) return 0;

	// recursive case
	return a + multiply(a,b-1);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		 

	
	cout << multiply(5,6)<<endl;

	return 0;
}
















