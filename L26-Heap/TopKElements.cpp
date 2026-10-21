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

void printHeap(priority_queue<int,vector<int>, cmp> h){
	while(!h.empty()){
		cout << h.top() << " ";

		h.pop();
	}
	cout << endl;
}

int main(){

	// priority_queue<int> h; // Maxheap
	priority_queue<int,vector<int>, cmp> h; // Minheap
	int k = 3;
	while(true){
		int no;
		cin>>no;

		if(no == -1){
			// Print top k values
			printHeap(h);
		}
		else{
			if(h.size() < k) {
				h.push(no);
			}
			else{
				if(h.top() < no) {
					h.pop();
					h.push(no);
				}
			}
		}

	}



	return 0;
}
















