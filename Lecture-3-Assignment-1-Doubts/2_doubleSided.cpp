#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	for(int row = 1 ; row <= (n+1)/2 ; row++){
		if(row == 1){
			// print n+1-2*row times spaces
			for (int i = 0; i < n+1-2*row; ++i)
			{
				cout << "  ";
			}
			// print 1
			cout << 1;
		}
		else{
			// spaces n+1-2*row times
			for (int i = 0; i < n+1-2*row; ++i)
			{
				cout << "  ";
			}
			// decreasing numbers [row se 1] tak
			for(int no = row ; no >= 1 ; no--){
				cout << no << " ";
			}
			// spaces 2*row - 3 times
			for (int i = 0; i < 2*row-3; ++i)
			{
				cout << "  ";
			}
			// increasing numbers [1 se row] tak
			for (int no = 1; no <= row; ++no)
			{
				cout << no << " ";
			}
		}

		cout << endl;
	}


	// Mirror pattern
	for(int row = (n+1)/2 - 1 ; row >= 1 ; row--){
		if(row == 1){
			// print n+1-2*row times spaces
			for (int i = 0; i < n+1-2*row; ++i)
			{
				cout << "  ";
			}
			// print 1
			cout << 1;
		}
		else{
			// spaces n+1-2*row times
			for (int i = 0; i < n+1-2*row; ++i)
			{
				cout << "  ";
			}
			// decreasing numbers [row se 1] tak
			for(int no = row ; no >= 1 ; no--){
				cout << no << " ";
			}
			// spaces 2*row - 3 times
			for (int i = 0; i < 2*row-3; ++i)
			{
				cout << "  ";
			}
			// increasing numbers [1 se row] tak
			for (int no = 1; no <= row; ++no)
			{
				cout << no << " ";
			}
		}

		cout << endl;
	}

	return 0;
}
















