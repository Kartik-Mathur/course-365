#include <iostream>
#include <queue>
using namespace std;

class Stack{
	queue<int> q1;
public:

	void reverseQueue(queue<int> &q){
		if(q.empty()){
			return;
		}

		int f = q.front();
		q.pop();
		reverseQueue(q);
		q.push(f);
	}

	void push(int d){
		q1.push(d);
	}

	void pop(){
		reverseQueue(q1);
		q1.pop();
		reverseQueue(q1);
	}

	int top(){
		reverseQueue(q1);
		int top = q1.front();
		reverseQueue(q1);
		return top;
	}

	bool empty(){
		return q1.empty();
	}

};

int main(){

	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.pop();
	s.pop();
	s.push(7);

	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}


	return 0;
}
















