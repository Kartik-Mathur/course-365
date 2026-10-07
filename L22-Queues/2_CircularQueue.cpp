#include <iostream>
using namespace std;

class Queue{
public:
	int *a;
	int f,r,cs,n;

	Queue(int s=5){
		n = s;
		a = new int[s];
		cs = 0;
		f = 0;
		r = n-1;
	}

	void push(int d){
		if(cs < n){
			r = (r+1)%n;
			a[r] = d;
			cs++;
		}
		else{
			cout << "Overflow\n";
		}
	}

	void pop(){
		if(cs > 0){
			f = (f+1)%n;
			cs--;
		}
		else{
			cout << "Underflow\n";
		}
	}

	int size(){
		return cs;
	}

	bool empty(){
		return cs == 0;
	}

	int front(){
		return a[f];
	}

};

int main(){

	// Queue q(6);
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6); // Overflow

	while(!q.empty()){
		cout << q.front() << " ";

		q.pop();
	}

	q.pop();



	return 0;
}
















