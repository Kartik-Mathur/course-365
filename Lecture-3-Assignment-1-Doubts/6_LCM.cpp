#include <iostream>
using namespace std;

int main(){

	int no1, no2;
	cin>>no1>>no2;

	int chotaNum = min(no1, no2); // GCD kabhi isse bada nhi ho skta
	int ans;
	for (int i = 1; i <= chotaNum; ++i)
	{
		if((no1 % i == 0) and (no2 % i == 0)){
			ans = i; // gcd hai ans ke andar
		}
	}

	int lcm = (no1 * no2) / ans;
	cout << lcm << endl;

	return 0;
}
















