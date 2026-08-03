#include <iostream>
using namespace std;

int main(){

	int a[100][100];
	int no = 1;
	
	int n, m;
	cin >> n >> m;
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m ; ++j)
		{
			a[i][j] = no++;
		}
	}

	for (int row = 0; row < n; ++row)
	{
		for (int col = 0; col < m ; ++col)
		{
			cout << a[row][col] << ' ';
		}
		cout << endl;
	}


	cout << "Enter key: ";
	int key;
	cin>>key;

	int i = 0, j = m - 1;
	bool flag = false;
	while(i < n and j >= 0){
		if(a[i][j] == key){
			cout << "Key found : "<<i <<", "<<j<<endl;
			flag = true;
			break;
		}
		else if(key > a[i][j]){
			i++;
		}
		else{
			j--;
		}
	}

	if(flag == false){
		cout << "Key not found\n";
	}


	return 0;
}
















