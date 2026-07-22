#include <iostream>
using namespace std;

int sum(int x,int y){

	int val = x + y;

	return val;
}

int main(){	


	int a,b;
	cin>>a>>b;

	int ans = sum(a,b);

	if(ans % 2 == 0){
		cout << "Sum is even\n";
	}
	else{
		cout << "Sum is odd\n";
	}


	cout << sum(50, 80) <<endl;




	return 0;
}
















