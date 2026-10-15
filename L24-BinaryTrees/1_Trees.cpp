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

class Pair{
public:
	int height, diameter;
};

Pair fastDiameter(node* root){
	if(root == NULL){
		Pair p;
		p.height = p.diameter = 0;
		return p;
	}

	Pair p;
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	p.height = max(left.height, right.height) + 1;
	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;
	p.diameter = max(op1, max(op2,op3));
	return p;
}

node* makeTreeLevelWise(){
	int data;
	cout << "Enter root node: ";
	cin>>data;
	if(data == -1) return NULL;

	node* root = new node(data);
	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node* f = q.front();
		q.pop();

		int l,r;
		cout << "Enter children of : "<<f->data <<" ";
		cin>>l>>r;
		if(l!=-1){
			f->left = new node(l);
			q.push(f->left);
		}
		if(r!=-1){
			f->right = new node(r);
			q.push(f->right);
		}
	}

	return root;
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

int pre[] = {8, 10, 1, 6, 4, 7, 3, 14, 13};
int k =0;

node* treeViaInAndPost(int *in, int s,int e){
	if(s>e){
		return NULL;
	}

	node* root = new node(pre[k++]);
	int j;
	for (int i = s; i <= e; ++i)
	{
		if(in[i] == root->data){
			j = i;
			break;
		}
	}

	root->left = treeViaInAndPost(in, s, j-1);
	root->right = treeViaInAndPost(in, j+1, e);
	return root;
}

int main(){

	// node* root = createTree();
	// node* root = makeTreeLevelWise();
	int in[] = {1, 10, 4, 6, 7, 8, 3, 13, 14 };
	int n = sizeof(in)/sizeof(int);
	node* root = treeViaInAndPost(in, 0, n-1);


	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;	
	postOrder(root);
	cout << endl;

	Pair ans = fastDiameter(root);
	cout << ans.height << endl;
	cout << ans.diameter << endl;

	return 0;
}
















