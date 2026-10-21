#include <iostream>
#include <vector>
using namespace std;

class Minheap{
	void heapify(int i){
		int left = 2*i;
		int right = 2*i+1;
		int mi = i;
		if(left < v.size() and v[left] < v[mi]) mi = left;
		if(right < v.size() and v[right] < v[mi]) mi = right;

		if(i != mi){
			swap(v[i],v[mi]);
			heapify(mi);
		}
	}
public:
	vector<int> v;

	Minheap(){
		v.push_back(-1); // To block 0th index
	}

	void push(int d){ 
		v.push_back(d);
		int c = v.size() - 1;
		int p = c/2;

		while(p>=1 and v[p] > v[c]){
			swap(v[p], v[c]);
			c /= 2;
			p /= 2;
		}
	}

	void pop(){
		swap(v[1], v[v.size() - 1]);
		v.pop_back();
		heapify(1);
	}

	int top(){ // Minimum element
		return v[1];
	}

	bool empty(){
		return v.size() == 1;
	}
};

int main(){	

	// HEAP SORT -> N.LogN
	Minheap h;

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
















