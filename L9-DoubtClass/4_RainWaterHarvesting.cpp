#include <iostream>
using namespace std;

int main(){

	int heights[1000];
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin >> heights[i];
	}

	int leftMax[1000], rightMax[1000];

	leftMax[0] = 0;
	int mx = heights[0];

	for (int i = 1; i < n; ++i)
	{
		leftMax[i] = mx;
		mx = max(mx, heights[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << leftMax[i] << ' ';
	}
	cout << endl;
	rightMax[n-1] = 0;
	mx = heights[n-1];

	for(int i = n-2 ; i >= 0 ; i--){
		rightMax[i] = mx;
		mx = max(mx, heights[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << rightMax[i] << ' ';
	}
	cout << endl;

	int water = 0;
	for (int i = 0; i < n; ++i)
	{
		int mi = min(rightMax[i], leftMax[i]);
		if(mi - heights[i] > 0){
			water += mi - heights[i];
		}
	}

	cout << water << endl;
	return 0;
}
















