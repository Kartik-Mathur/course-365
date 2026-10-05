#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string str){
	
	stack<char> s;
	for (int i = 0; i < str.size(); ++i)
	{
		switch(str[i]){
		case '(':
		case '{':
		case '[':
			s.push(str[i]);
			break;
		case ')':
			if(!s.empty() and s.top() == '('){
				s.pop();
			}
			else{
				return false;
			}
			break;
		case '}':
			if(!s.empty() and s.top() == '{'){
				s.pop();
			}
			else{
				return false;
			}
			break;
		case ']':
			if(!s.empty() and s.top() == '['){
				s.pop();
			}
			else{
				return false;
			}
			
		}
	}

	return s.empty() == true;
	// if(s.empty()){
	// 	return true;
	// }
	// else{
	// 	return false;
	// }
}

int main(){

	string s = "[a+b*(c+d*{x+y})+z]";

	if(isBalanced(s)){
		cout << "Balanced\n";
	}
	else{
		cout << "Not Balanced\n";
	}


	return 0;
}
















