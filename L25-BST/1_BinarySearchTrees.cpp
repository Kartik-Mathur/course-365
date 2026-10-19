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

	return 0;
}
















