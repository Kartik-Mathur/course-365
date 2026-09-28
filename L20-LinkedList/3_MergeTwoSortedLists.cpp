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

void insertAtEnd(node* &head, node* &tail, int data){
	if(head == NULL){
		node* n = new node(data);
		head = tail = n;
	}
	else{
		node* n = new node(data);
		tail -> next = n;
		tail = n;
	}
}

int lengthLL(node* head){
	int cnt = 0;
	while(head != NULL){
		cnt++;
		head = head->next;
	}

	return cnt;
}

void printLL(node* head){
	while(head != NULL){
		cout << head -> data << " --> ";
		head = head->next;
	}
	cout << "NULL\n";
}

node* mergeLL(node* a, node* b){
	if(a == NULL){
		return b;
	}

	if(b == NULL){
		return a;
	}

	node* nH;
	if(a -> data < b->data){
		nH = a;
		nH -> next = mergeLL(a->next, b);
	}
	else{
		nH = b;
		nH -> next = mergeLL(a, b->next);
	}
	return nH;
}


int main(){

	node* head, *tail;
	node* head1, *tail1;
	head = tail = NULL;
	head1 = tail1 = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head1, tail1, 2);
	insertAtEnd(head1, tail1, 4);
	insertAtEnd(head1, tail1, 7);
	insertAtEnd(head1, tail1, 8);
	
	printLL(head);
	printLL(head1);

	head = mergeLL(head, head1);
	printLL(head);
	



	return 0;
}
















