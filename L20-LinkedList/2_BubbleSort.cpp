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

void bubbleSort(node* &head, node* &tail){
	node* c, *p, *n;

	int len = lengthLL(head);
	for (int i = 0; i < len - 1; ++i)
	{
		c = head;
		p = NULL;

		while(c != NULL and c->next != NULL){
			n = c -> next;

			if(c->data > n->data){
				// Swapping hogi
				if(p == NULL){
					// Head swap hoga
					c->next = n -> next;
					n -> next = c;
					head = p = n;
				}
				else{
					// Head swap nahi hoga
					c->next = n -> next;
					n -> next = c;
					p->next = n;
					p = n;
				}
			}
			else{
				// Swapping nahi hogi
				p = c;
				c = n;
			}
		}
	}
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
	// insertAtEnd(head, tail, 7); 
	printLL(head);
	bubbleSort(head, tail);
	printLL(head);




	return 0;
}
















