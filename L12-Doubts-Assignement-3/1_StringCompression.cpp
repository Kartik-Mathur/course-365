#include <iostream>
#include <string>
using namespace std;

string compress(string s){
	if(s.size() == 0){
		return ""; // khaali string mei kch nhi ho skta
	}

	string ans = "";

	char ch = s[0];
	int cnt = 0,i = 0;

	while(i < s.size() and ch == s[i]){
		i++;
		cnt++;
	}
	
	ans += ch;
	if(cnt > 1){
		ans += to_string(cnt);
	}

	string chotiString = compress(s.substr(i));

	ans += chotiString;
	return ans;
}

int main(){
	string s;
	cin>>s;

	cout << compress(s) << endl;

	return 0;
}
/*
int main(){
	string s;
	cin>>s;

	string ans = "";
	char ch = s[0];

	int i = 0;
	while(i<s.size()){
		int cnt = 0;
		while(i < s.size() and ch == s[i]){
			i++;
			cnt++;
		}

		ans.push_back(ch);
		ans += to_string(cnt);

		if(i < s.size()) ch = s[i];
	}

	cout << ans << endl;

	return 0;
}
*/
















