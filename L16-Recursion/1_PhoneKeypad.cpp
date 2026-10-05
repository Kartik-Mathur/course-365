#include <iostream>
using namespace std;

string keys[]={
	"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"
};

void solve(char *ip, int i, char* op, int j){
	// base case
	if(ip[i] == '\0'){
		op[j] = '\0';
		cout << op << endl;
		return;
	}

	// recursive case
	int digit = ip[i] - '0';
	for(int k = 0 ; keys[digit][k] != '\0' ; k++){
		op[j] = keys[digit][k]; 
		solve(ip, i+1, op, j+1);
	}
}


int main(){


	char ip[100], op[100];
	cin>>ip;
	solve(ip, 0, op, 0);


	// cout << keys[2] << endl;
	// cout << keys[3] << endl;

	// int digit = 8;

	// cout << keys[digit] << endl; // it's printing a string
	// for(int k = 0 ; k < keys[digit].size() ; k++){
	// 	cout << keys[digit][k] << " ";
	// }
	// cout << endl;

	return 0;
}
















