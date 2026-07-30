#include <iostream>
using namespace std;

int main(){

	char a[] = "aabbcdz";
	char b[] = "babazdc";

	/*
	char a[100];
	cin.getline(a,100);
	char b[100];
	cin.getline(b,100);
	*/

	int freq[26] = {};

	// Iterate on array a[] to increase freq
	for (int i = 0; a[i] != '\0'; ++i)
	{
		int indx = a[i] - 'a';
		freq[indx]++;
	}

	// Iterate on array b[] to decrease freq

	for (int i = 0; b[i] != '\0'; ++i)
	{
		int indx = b[i] - 'a';
		freq[indx]--;
	}

	bool ans = true;
	for (int i = 0; i < 26; ++i)
	{
		if(freq[i] != 0){
			ans = false;
		}
	}
	
	if(ans == true) cout << "True\n";
	else cout << "False\n";

	// for (char ch = 'a'; ch <= 'z'; ++ch)
	// {
	// 	cout << ch << ' ';
	// }
	// cout << endl;

	return 0;
}
















