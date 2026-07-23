#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int no;
	cin>>no;

	int c_no = no;


	int digitCnt = 0;
	while(no > 0){
		digitCnt ++;

		no /= 10;
	}

	no = c_no;
	int ans = 0;
	while(no > 0){
		int d = no % 10;

		ans += pow(d, digitCnt);

		no /= 10;
	}

	if(c_no == ans){
		cout << "true";
	}
	else{
		cout << "false";
	}


	return 0;
}
















