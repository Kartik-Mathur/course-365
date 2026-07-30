#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){

	char a[] = "Coding";
	int k = 8;
	int n = strlen(a);

	k %= n;

	reverse(a, a + n); // Poori string reverse
	reverse(a, a+k); // reverse first k buckets
	reverse(a+k, a+n); // reverse last ke remaining buckets

	cout << a << endl;

	return 0;
}
















