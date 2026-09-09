#include <iostream>
#include <cmath>
using namespace std;

bool isSafe(int mat[][9],int i,int j,int n,int number){
	// check the row and column
	for (int k = 0; k < n ; ++k)
	{
		if(mat[i][k] == number or mat[k][j] == number){
			return false;
		}
	}

	// check the smaller matrix
	n = sqrt(n);

	int si = (i/n)*n;
	int sj = (j/n)*n;

	for (int i = si; i < si+n; ++i)
	{
		for (int j = sj; j < sj+n ; ++j)
		{
			if(mat[i][j] == number){
				return false;
			}
		}
	}

	return true;
}

bool sudokuSolver(int mat[][9],int i,int j,int n){
	// base case
	if(i == n){
		// print the sudoku
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n ; ++j)
			{
				cout << mat[i][j] << ' ';
			}
			cout << endl;
		}

		return true;
	}

	// recursive case
	if(j == n){
		// if all the columns are filled of ith row then simple update i and take j -> 0
		return sudokuSolver(mat, i+1, 0, n);
	}

	// (i, j) cell can be already filled
	if(mat[i][j] != 0){
		return sudokuSolver(mat, i, j+1, n); // jo bhi choti problem answer return karegi
		// wahi humara answer hoga mainly....
	}
	// (i, j) cell can be empty
	for (int number = 1; number <= 9; ++number)
	{
		if(isSafe(mat, i, j, n, number) == true){
			
			mat[i][j] = number; // jo number recursion call se pehle rakha

			bool kyaBakiSolveHua = sudokuSolver(mat, i, j+1, n);
			
			if(kyaBakiSolveHua == true){
				return true; 
			}

			mat[i][j] = 0; // backtracking
		}
	}

	// If i'm not able to solve the sudoku's empty cell that means we cannot place a number here
	return false;
}

int main(){
	int mat[9][9]=
	{
		{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}
	};

	sudokuSolver(mat, 0, 0, 9); 

	return 0;
}
















