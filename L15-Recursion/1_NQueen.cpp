#include <iostream>
using namespace std;

bool isSafe(int r,int c,int n,int board[][100]){
	for (int k = 0; k < r ; ++k)
	{
		if(board[k][c] == true){
			return false;
		}
	}

	int i = r, j = c;
	while(r>=0 and c<n){
		if(board[r][c] == true){
			return false;
		}

		r--;
		c++;
	}

	r = i;
	c = j;
	while(r>=0 and c>=0){
		if(board[r][c] == true){
			return false;
		}

		r--;
		c--;
	}

	return true; // (r, c) is a safe cell now...
}

bool nQueen(int board[][100],int r,int n){
	// base case
	if(r == n){
		// print the board

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << board[i][j] << " ";
			}
			cout << endl;
		}
		
		cout << endl;

		return false;
	}

	// recursive case
	for (int c = 0; c < n; ++c)
	{
		if(isSafe(r, c, n, board) == true){
			board[r][c] = 1; // place the queen

			bool kyaBakiPlaceHui = nQueen(board, r+1, n);

			if(kyaBakiPlaceHui == true){
				return true;
			}

			board[r][c] = 0; // backtracking
		}
	}

	// column ke loop ke bahar aa gaye that means rth row mei kisi bhi cell mei 
	// queen place nhi hui......
	return false;
}

int main(){

	int board[100][100] = {};

	int n;
	cin>>n;

	nQueen(board, 0, n);



	return 0;
}
















