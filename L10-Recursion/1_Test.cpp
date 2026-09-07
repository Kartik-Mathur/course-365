#include <iostream>
using namespace std;

int fact(int n){
	// base case
	if(n == 0){
		return 1;
	}
	
	// recursive case
	// fact(n) = n * fact(n-1)
	int chota = fact(n-1); // Pure assumption
	// Ab agar mere pass (n-1)! aa gaya meine maan lia
	int bada = n * chota;

	return bada; // n! ko return kar diya
}

int f(int n){

	if(n == 0){
		return 1;
	}


	return n * f(n-1);
}

int main(){

	int n;

	cin >> n;
	cout << f(n) << endl;

	return 0;
}
















