#include <iostream>
using namespace std;

void subsequences(char *in, int i, char* op,int j){
	// base case
	if(in[i] == '\0'){
		op[j] = '\0';
		cout << op << endl;
		return;
	}

	// ith character ko ignore kardo op[] mei mat lo
	subsequences(in, i+1, op, j);

	// ith character ko lelo op[] mei and i, j dono aage badha do
	op[j] = in[i];
	subsequences(in , i+1, op, j+1);
}

int main(){

	char a[100];
	char op[100];
	cin>>a;

	subsequences(a, 0, op, 0);


	return 0;
}
















