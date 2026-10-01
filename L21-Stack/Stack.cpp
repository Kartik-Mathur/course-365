#include <iostream>
#include <stack> // STL : Standard Template Library
using namespace std;

int main(){

	stack<int> s; 
	// s.push('A');
	// s.push('B');
	// s.push('C');
	// s.push('D');

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while(!s.empty()){

		cout << s.top() << endl;

		s.pop();
	}




	return 0;
}
















