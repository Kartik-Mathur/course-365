#include <iostream>
#include <vector>
using namespace std;

int main(){

	int n;
	cin>>n;

	vector<int> v(n); // create n buckets in the vector, now we have n size of array
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}

	
	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << ' ';
	}

	return 0;
}
















