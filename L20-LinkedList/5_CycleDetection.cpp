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

void breakCycle(node* head,node *f){
	node* s = head;
	node* fp;

	while(f!=s){
		fp = f;
		f = f->next;
		s = s->next;
	}

	fp->next = NULL;
}

bool isCyclicLL(node* head){
	node* f, *s;
	f = s = head;
	while(f != NULL and f ->next != NULL){
		f = f -> next -> next;
		s = s -> next;
		if(f == s){
			breakCycle(head, f);
			return true;
		}
	}

	// if we are here that means f cannot two steps further that means there is no cycle..
	return false;
}

int main(){

	node* head, *tail;
	head = tail = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7); 
	insertAtEnd(head, tail, 8); 

	tail -> next = head -> next -> next; // Creates a cycle

	if(isCyclicLL(head) == true){
		cout << "Cycle hai\n";
		printLL(head);
	}
	else{
		cout << "Cycle nahi hai\n";
		printLL(head);
	}



	return 0;
}
















