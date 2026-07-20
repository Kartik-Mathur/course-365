#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	for(int row = 1; row <= n ; row++){
		if(row == 1){
			// print n-row times ' '
			for(int i = 1 ; i<=n-row ;i++){
				cout << " \t";
			}
			// print 1
			cout << 1;
		}
		else{
			// print n-row times ' '
			for(int i = 1 ; i<=n-row ;i++){
				cout << " \t";
			}
			// print row times increasing numbers, no = row
			int no = row;
			for(int i = 1 ; i<=row ;i++){
				cout << no << '\t';
				no++;
			}
			// print row - 1 times decreasing numbers, no = 2*row - 2
			no = 2*row - 2;
			for(int i = 1 ; i<=row - 1 ;i++){
				cout << no << '\t';
				no--;
			}
		}

		cout << endl;
	}

	return 0;
}
















