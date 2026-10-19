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

void printRange(node* root, int k1, int k2){ // T.C: O(N)
	if(root == NULL) return;

	if(root->data >= k1){
		printRange(root->left, k1, k2);
	}

	if(root->data >= k1 and root->data <= k2) {
		cout << root->data << " ";	
	}

	if(root->data <= k2){
		printRange(root->right, k1, k2);
	}
}

node* searchKey(node* root, int key){
	if(root == NULL) return NULL;

	if(root->data == key){
		return root;
	}

	if(root->data > key){
		return searchKey(root->left,key);
	}
	else{
		return searchKey(root->right,key);
	}
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

bool isBST(node* root,int mi = INT_MIN,int mx = INT_MAX){
	if(root == NULL) return true;

	if(root->data >= mi and root->data <= mx and
		isBST(root->left, mi, root->data) == true and
		isBST(root->right, root->data, mx) == true ){
		return true;
	}

	return false;
}

class Pair{
public:
	int height;
	bool balanced;
};

Pair isBalanced(node* root){
	if(root == NULL){
		Pair p;
		p.height = 0;
		p.balanced = true;
		return p;
	}

	Pair left = isBalanced(root->left);
	Pair right = isBalanced(root->right);

	Pair p;
	p.height = max(left.height, right.height) + 1;

	if(abs(left.height - right.height) <= 1 and left.balanced == true and right.balanced == true){
		p.balanced = true;
	}
	else {
		p.balanced = false;
	}
	return p;
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
	printRange(root, 3, 9);
	cout << endl;

	node* ans = searchKey(root, 110);
	if(ans == NULL){
		cout << "Not Found\n";
	}
	else{
		cout << "Key Found\n";
	}

	if(isBST(root)){
		cout<<"BST hai\n";
	}
	else{
		cout<<"BST Nahi hai\n";
	}

	Pair p = isBalanced(root);
	cout << p.height<<endl;
	cout << (p.balanced ? "Yes balanced hai\n" : "No balanced nahi hai\n");
	// if(p.balanced == true){
	// 	cout << "Yes balanced hai\n";
	// }
	// else{
	// 	cout << "No balanced nahi hai\n";
	// }
	return 0;
}
















