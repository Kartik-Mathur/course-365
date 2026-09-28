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

node* midLL(node* head){
	if(head == NULL or head->next == NULL){
		return head;
	}

	node* s = head, *f = head->next;

	while(f != NULL and f->next != NULL){
		f = f->next->next;
		s = s->next;
	}

	return s;
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

node* mergeSort(node* head){
	if(head == NULL or head->next == NULL){
		// koi bhi node nhi hai ya ek hi node hai in both the cases return head
		return head;
	}

	node* mid = midLL(head);
	// 1. Divide
	node* a = head;
	node* b = mid->next;
	mid -> next = NULL;
	// 2. Sort
	a = mergeSort(a);
	b = mergeSort(b);
	// 3. Merge
	node* nH = mergeLL(a,b);
	return nH;
}


int main(){

	node* head, *tail;
	head = tail = NULL;

	insertAtEnd(head, tail, 11);
	insertAtEnd(head, tail, 21);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 4);
	
	printLL(head);
	head = mergeSort(head);
	printLL(head);


	



	return 0;
}
















