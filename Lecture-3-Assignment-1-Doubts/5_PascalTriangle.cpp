#include <iostream>
using namespace std;

int main(){

	int N;
	cin>>N;

	for(int row = 0 ; row <= N - 1 ; row++){
		int pT = 1;
		cout << pT << '\t';	 // pT = nCr-1

		int n = row;
		for(int r = 1 ; r <= n ; r++){
			int nT = pT * (n - r + 1)/r; // nT = nCr

			cout << nT << '\t';

			pT = nT;
		}

		cout << endl;
	}

	return 0;
}
















