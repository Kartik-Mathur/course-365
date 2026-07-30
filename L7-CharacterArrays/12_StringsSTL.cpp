#include <iostream>
#include <algorithm>
using namespace std;

// strings are passed by value by default
// strings ko by reference pass karna padega
void update(string &x){
	x = "meri new string";
	return;
}

int main(){
	// size nhi batana hoga
	string s = "hello";

	s = "world"; // this works
	cout << s << endl;
	s += "hello";
	cout << s << endl;

	cout << s.size() << endl;
	cout << s.length() << endl;

	update(s);
	cout << s <<endl;
	// automatically size change kar lega
	// as per need of the string
	s = "i am learning strings STL";
	cout << s <<endl;

	string a = "Elephant";
	string b = "alligator";

	if(a>b){
		cout << a << " is bigger dictionary wise\n";
	}
	else{
		cout << b << " is bigger dictionary wise\n";
	}

	// Loops on strings
	for(int i = 0 ; i < s.size() ; i++){
		cout << s[i] <<'-';
	}
	cout << endl;

	// We have push_back and pop_back functions to add and remove characters at the end of string
	a.push_back('1');
	cout << a << endl;
	a.pop_back();
	cout << a << endl;

	// Reverse a string
	reverse(a.begin(), a.end());
	cout << a << endl;

	return 0;
}
















