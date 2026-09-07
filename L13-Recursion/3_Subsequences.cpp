#include <iostream>
using namespace std;

void subsequences(string in, int i, string op){
	// base case
	if(i == in.size()){
		cout << op << endl;
		return;
	}

	// ith character ko ignore kardo op[] mei mat lo
	subsequences(in , i+1, op);
	// ith character ko lelo op[] mei and i, j dono aage badha do
	subsequences(in, i+1, op + in[i]);
}

int main(){

	string a, op;
	cin>>a;

	subsequences(a, 0, op);


	return 0;
}
















