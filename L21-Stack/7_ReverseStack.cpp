#include <iostream>
#include <stack> // STL : Standard Template Library
using namespace std;

void pushBottom(stack<int> &s, int top){
	if(s.empty()){
		s.push(top);
		return;
	}

	int t = s.top();
	s.pop();
	pushBottom(s, top);
	s.push(t);
}

void reverseStack(stack<int> &s){
	// base case
	if(s.empty()){
		return;
	}

	// recursive case
	int top = s.top();
	s.pop();
	reverseStack(s);
	pushBottom(s, top);
}

int main(){

	stack<int> s; 

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	reverseStack(s);

	while(!s.empty()){

		cout << s.top() << endl;

		s.pop();
	}




	return 0;
}
















