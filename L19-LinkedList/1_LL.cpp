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

void insertAtFront(node* &h, node* &t, int data){
	if(h == NULL){
		node* n = new node(data);
		h = t = n;
	}
	else{
		node* n = new node(data);
		n -> next = h;
		h = n;
	}
}

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

void insertAtMid(node* &head,node *& tail, int pos, int data){
	if(pos == 0){
		insertAtFront(head, tail, data);
	}
	else if(pos >= lengthLL(head)){
		insertAtEnd(head ,tail ,data);
	}
	else{
		node* temp = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp -> next;
		}

		node* n = new node(data);
		n->next = temp -> next;
		temp->next = n;
	}
}


void deleteAtFront(node* &head,node* &tail){
	if(head == NULL){
		return;
	}
	else if(head->next == NULL){
		delete head;
		head = tail = NULL;
	}
	else{
		node* temp = head;
		head = head->next;
		delete temp;
	}
}

void deleteAtEnd(node* &head, node* &tail){
	if(head == NULL){
		return;
	}
	else if(head->next == NULL){
		delete head;
		head = tail = NULL;
	}
	else{
		node* temp = head;
		while(temp -> next != tail){
			temp = temp -> next;
		}
		
		delete tail;
		tail = temp;
		tail -> next = NULL;
	}
}

void deleteAtMid(node* &head, node* &tail,int pos){
	if(pos == 0){
		deleteAtFront(head, tail);
	}
	else if(pos >= lengthLL(head) - 1){
		deleteAtEnd(head, tail);
	}
	else{
		node* temp = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp -> next;
		}
		node* n = temp->next;
		temp -> next = n->next;
		delete n;
	}
}

void reverseLL(node* &head, node* &tail){
	node* c = head;
	node* p = NULL, *n;

	while(c != NULL){
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}

	swap(head, tail);
}

void printLL(node* head){
	while(head != NULL){
		cout << head -> data << " --> ";
		head = head->next;
	}
	cout << "NULL\n";
}

int main(){

	node* head, *tail;
	head = tail = NULL;

	insertAtFront(head, tail, 1);
	insertAtFront(head, tail, 2);
	insertAtFront(head, tail, 3);
	insertAtFront(head, tail, 4);
	insertAtFront(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7); 

	printLL(head);
	insertAtMid(head, tail, 5, 11);
	printLL(head);

	cout<<"Length : "<<lengthLL(head) << endl;

	deleteAtFront(head, tail);
	printLL(head);
	reverseLL(head, tail);
	printLL(head);


	return 0;
}
















