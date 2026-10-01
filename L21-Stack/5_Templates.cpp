#include <iostream>
using namespace std;

template <typename U>
class node{
public:
	U data;
	node* next;
	node(U d){
		data = d;
		next = NULL;
	}
};

template<typename T>
class Stack{
	node<T>* head;
public:
	Stack(){
		head = NULL;
	}

	void push(T d){
		node<T>* n = new node<T>(d);
		n->next = head;
		head = n;
	}

	void pop(){
		node<T>* temp = head;
		head = head->next;
		delete temp;
	}

	T top(){
		return head->data;
	}

	bool empty(){
		return head == NULL;
	}
};


int main(){

	Stack<char> s;
	
	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');

	// s.push(1);
	// s.push(2);
	// s.push(3);
	// s.push(4);

	while(!s.empty()){
		
		cout << s.top() << endl;	
		s.pop();
	}


	return 0;
}
















