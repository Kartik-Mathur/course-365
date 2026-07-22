#include <iostream>
using namespace std;

void printTable(int init, int fval, int step){

	int f = init;

	while(f <= fval){

		int cel = (5/9.0)*(f - 32);

		cout << f << " "<<cel << endl;

		f = f + step;
	}
}

int main(){

	int init, fval, step;

	cin>>init>>fval>>step;

	printTable(init, fval, step);
	
	printTable(0, 200, 40);

	return 0;
}
















