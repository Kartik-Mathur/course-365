#include <iostream>
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

class BST{
public:
	node*root;
	BST(){
		root = NULL;
	}

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

	void createTree(){
		int data;
		cin>>data;
		while(data != -1){
			root = insertInBST(root, data);
			cin>>data;
		}
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

	void levelOrder(){
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
};

int main(){

	BST b;
	b.createTree();
	b.preOrder(b.root);
	cout << endl;
	b.inOrder(b.root);
	cout << endl;	
	b.postOrder(b.root);
	cout << endl;
	b.levelOrder();


	return 0;
}
















