#include <iostream>
#include <string>
using namespace std;

int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
int n = 10;

bool isCBNumber(string x){
	if(x.size() == 0){
		return false;
	}

	long long int a = stoll(x);
	if(a == 0 or a == 1){
		return false;
	}

	for (int i = 0; i < n; ++i)
	{
		if(primes[i] == a){
			return true;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if(a%primes[i] == 0){
			return false;
		}
	}

	return true;
}

int solve(string s){
	// base case
	if(s.size() == 0){
		return 0;
	}

	// recursive caseg
	// Pehle character se har length ki string
	int ans = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		string x = s.substr(0, i+1);
		if(isCBNumber(x)){
			int choteMeiCBNumbersCount = solve(s.substr(i+1));

			ans = max(ans, 1 + choteMeiCBNumbersCount);
		}
	}
	
	// Pehle character ko ignore karke choti string
	ans = max(ans, solve(s.substr(1)));

	return ans;
}

int main(){
	int temp;
	cin>>temp;
	string s;
	cin>>s;

	cout << solve(s) << endl;


	return 0;
}
















