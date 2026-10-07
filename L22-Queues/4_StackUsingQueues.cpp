#include <iostream>
#include <queue>
using namespace std;

class Stack{
	queue<int> q1, q2;
public:

	void push(int d){
		if(!q2.empty()){
			// if q2 mei elements hai tab bhi q2 mei insertion
			q2.push(d);
		}
		else{
			// if q1 and q2 dono khali hai tab bhi q1 mei insertion
			// if q1 mei elements hai tab bhi q1 mei insertion
			q1.push(d); 
		}
	}

	void pop(){
		if(!q1.empty()){
			while(q1.size() > 1){
				int t = q1.front();
				q1.pop();
				q2.push(t);
			}
			q1.pop(); // last element delete kar diya
		}
		else{
			while(q2.size() > 1){
				int t = q2.front();
				q2.pop();
				q1.push(t);
			}

			q2.pop(); // last element delete kar diya
		}
	}

	int top(){
		if(!q1.empty()){
			while(q1.size() > 1){
				int t = q1.front();
				q1.pop();
				q2.push(t);
			}
			int x = q1.front();
			q1.pop();
			q2.push(x);
			return x;
		}
		else{
			while(q2.size() > 1){
				int t = q2.front();
				q2.pop();
				q1.push(t);
			}
			int x = q2.front();
			q2.pop();
			q1.push(x);
			return x;
		}
	}

	bool empty(){
		if(q1.empty() and q2.empty()){
			return true;
		}
		else{
			return false;
		}
	}

};

int main(){

	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}


	return 0;
}
















