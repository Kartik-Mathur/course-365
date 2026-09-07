#include <iostream>
using namespace std;

bool ratInMaze(char maze[][10],int i,int j,int n,int m,int sol[10][10]){
	// base case
	if(i == n-1 and j == m-1){
		sol[i][j] = 1; // n-1 and m-1 is also a part of solution

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m ; ++j)
			{
				cout << sol[i][j] << ' ';
			}
			cout << endl;
		}
		
		cout << endl;
		
		return false;
	}
	// recursive case
	sol[i][j] = 1; // maanlo i,j cell is part of solution

	// right jaao and dekho maze n*(m-1) wali solve hui
	if(j+1<m and maze[i][j+1] != 'X'){
		bool kyaRightSeBaatBani = ratInMaze(maze, i, j+1, n, m, sol);
		if(kyaRightSeBaatBani == true){
			return true; // ho gaya solve maze as right se raasta mil gaya
		}
	}

	// down jaao and dekho maze (n-1)*m wali solve hui
	if(i+1 < n and maze[i+1][j] != 'X'){
		bool kyaDownSeBaatBani = ratInMaze(maze, i+1, j, n, m, sol);
		if(kyaDownSeBaatBani == true){
			return true;
		}
	}
	
	sol[i][j] = 0; // backtracking
	return false;
}

int main(){

	char maze[][10] = {
		"0000",
		"00XX",
		"0000",
		"XX00",
	};

	int sol[10][10] = {0};

	ratInMaze(maze, 0, 0, 4, 4, sol);

	return 0;
}
















