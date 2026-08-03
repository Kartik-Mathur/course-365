#include <iostream>
using namespace std;

int main(){
	int a[100][100];
	int no = 1;
	int n, m;

	cin >> n >> m;
	
	for (int row = 0; row < n; ++row)
	{
		for (int col = 0; col < m ; ++col)
		{
			a[row][col] = no++;
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


	// Search key now
	cout << "Enter key: ";
	int key;
	cin>>key;
	bool flag = false;

	for (int row = 0; row < n; ++row)
	{
		for (int col = 0; col < m ; ++col)
		{
			if(a[row][col] == key){
				cout << "Key found at "<<row<<", "<<col<<endl;
				flag = true;
				break;
			}	
		}
		
		if(flag == true){
			break; // since we have found they key already
		}
	}

	if(flag == false){
		cout << "Key Not Found\n";
	}

	return 0;
}
















