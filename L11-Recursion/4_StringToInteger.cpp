#include <iostream>
using namespace std;

int stringToInt(char *a,int n){
	if(n == 0){
		return 0;
	}

	int ld = a[n-1]-'0';

	return stringToInt(a,n-1)*10 + ld;
}

int main(){

	char a[] = "1234";

	int ans = stringToInt(a,strlen(a));

	cout << ans << endl; // 1234
	cout << ans+2 << endl; // 1236

	return 0;
}
















