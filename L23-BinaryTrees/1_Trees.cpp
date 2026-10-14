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

node* createTree(){
	int data;
	cin>>data;

	if(data == -1){
		return NULL;
	}

	node* root = new node(data);
	root->left = createTree();
	root->right = createTree();
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

int countNodes(node* root){
	if(root == NULL){
		return 0;
	}

	return 1 + countNodes(root->left) + countNodes(root->right);
}

int height(node* root)
{
	if(root == NULL){
		return 0;
	}

	int leftHeight = height(root -> left);
	int rightHeight = height(root -> right);
	return max(leftHeight, rightHeight) + 1;
}

int diameter(node* root){
	if(root==NULL){
		return 0;
	}

	int op1 = height(root->left) + height(root->right);
	int op2 = diameter(root	-> left);
	int op3 = diameter(root	-> right);
	return max(op1, max(op2, op3));
}

// Time Complexity : O(N)
node* searchKey(node* root, int key){
	if(root == NULL){
		return NULL;
	}

	if(root->data == key) return root; // Root par hi key available hai
	node* ans = searchKey(root->left, key); 
	if(ans != NULL){ // if left mei mill gaya toh right jaane ki need nahi hai
		return ans;
	}

	// Right mei hai toh good, else NULL hi hoga answer
	ans = searchKey(root->right, key);
	return ans;
}

void mirror(node* root){
	if(root == NULL){
		return;
	}

	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
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

	node* root = createTree();

	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;	
	postOrder(root);
	cout << endl;

	cout << "Total Nodes  : "<<countNodes(root)<<endl;
	cout << "Total Height : "<<height(root)<<endl;
	cout << "Diameter     : "<<diameter(root)<<endl;

	node* ans = searchKey(root, 110);
	if(ans){
		cout << "Key Found "<<ans->data <<endl;
	}
	else{
		cout << "Key not found\n";
	}


	levelOrder(root);
	mirror(root);
	levelOrder(root);

	return 0;
}
















