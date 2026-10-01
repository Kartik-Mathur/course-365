#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
	node(int d){
		data = d;
		next = NULL;
	}
};

int main(){
	
	node* n = new node(1); // DMA
	node a(1); // SMA

	return 0;
}
















