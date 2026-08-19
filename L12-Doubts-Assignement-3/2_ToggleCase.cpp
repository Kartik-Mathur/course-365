#include <iostream>
using namespace std;

int main(){

	string s;
	cin>>s;
	
	for(int i = 0 ; i < s.size() ; i++){
		if(s[i] >= 'A' and s[i] <= 'Z'){ // capital case
			s[i] = s[i] + 32;
		}
		else{ // smaller case
			s[i] = s[i] - 32;
		}
	}

	cout << s << endl;

	return 0;
}
















