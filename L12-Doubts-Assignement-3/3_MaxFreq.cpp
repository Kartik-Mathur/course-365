#include <iostream>
using namespace std;

int main(){

	string s;
	cin>>s;

	int freq[256] = {};

	for(int i = 0 ; i < s.size() ; i++){
		int indx = s[i];
		freq[indx]++;
	}

	int mx = 0;
	char ans;
	for (int i = 0; i < 256; ++i)
	{
		if(freq[i] > mx){
			ans = (char)i;
			mx = freq[i];
		}
	}

	cout << ans << endl;

	return 0;
}
















