#include <iostream>
#include <queue>
using namespace std;

class cmp{
public:
	// FUNCTOR
	bool operator()(int a,int b){
		return a>b;
	}
};

int main(){

	// priority_queue<int> h; // Maxheap
	priority_queue<int,vector<int>, cmp> h; // Minheap

	h.push(1);
	h.push(3);
	h.push(2);
	h.push(5);
	h.push(0);

	while(!h.empty()){
		cout << h.top() << " ";

		h.pop();
	}
	cout << endl;



	return 0;
}
















