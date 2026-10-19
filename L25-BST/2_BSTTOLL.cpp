#include <iostream>
#include <queue>
using namespace std;

class node{
public:
	int data;
	node* left, *right;
	node(int d){
		data = d;
		left = right = NULL;
	}
};

node* insertInBST(node* root,int data){
	if(root == NULL){
		root = new node(data);
		return root;
	}

	if(root->data < data){
		root->right = insertInBST(root->right, data);
	}
	else{
		root->left = insertInBST(root->left, data);
	}
	return root;
}

node* createBST(){
	node* root = NULL;

	int data;
	cin>>data;
	while(data != -1){
		root = insertInBST(root, data);
		cin>>data;
	}

	return root;
}

void preOrder(node* root){
	if(root == NULL){
		return;
	}

	cout << root -> data <<" ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node* root){
	if(root == NULL){
		return;
	}

	inOrder(root->left);
	cout << root -> data <<" ";
	inOrder(root->right);
}

void postOrder(node* root){
	if(root == NULL){
		return;
	}

	postOrder(root->left);
	postOrder(root->right);
	cout << root -> data <<" ";
}

void levelOrder(node* root){
	queue<node*> q;

	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* x = q.front();
		q.pop();

		if(x != NULL){
			cout << x->data <<" ";
			if(x->left != NULL){
				q.push(x->left);
			}

			if(x->right != NULL){
				q.push(x->right);
			}
		}
		else{
			cout << endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
	}
}

class LinkedList{
public:
	node* head, *tail;
};

LinkedList BSTtoLL(node* root){
	LinkedList l;
	if(root == NULL){
		l.head = l.tail = NULL;
		return l;
	}

	if(root->left != NULL and root->right != NULL){
		LinkedList left = BSTtoLL(root->left);
		LinkedList right = BSTtoLL(root->right);

		left.tail -> right = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
		return l;
	}
	else if(root->left != NULL and root->right == NULL){
		LinkedList left = BSTtoLL(root->left);
		left.tail -> right = root;
		l.head = left.head;
		l.tail = root;
		return l;
	}
	else if(root->left == NULL and root->right != NULL){
		LinkedList right = BSTtoLL(root->right);
		root->right = right.head;
		l.head = root;
		l.tail = right.tail;
		return l;
	}
	else{
		l.head = root;
		l.tail = root;
		return l;
	}
}

int main(){

	node* root = createBST();

	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;	
	postOrder(root);
	cout << endl;
	levelOrder(root);

	LinkedList l = BSTtoLL(root);

	node* head = l.head;
	while(head!=NULL){
		cout << head->data << " -> ";
		head = head->right;
	}
	cout << "NULL\n";
	
	return 0;
}
















