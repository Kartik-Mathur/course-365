#include <iostream>
using namespace std;

int main(){

	int a[1000];
	cout << "Enter n (max: 1000) : ";
	
	int n;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	cout << "Enter key to search : ";

	int key;
	cin>>key;
	int index = -1;
	for (int i = 0; i < n; ++i)
	{
		if(a[i] == key){
			index = i;
			break;
		}
	}

	if(index != -1){
		cout << "Key found at index : "<<index <<", val : "<<a[index]<<endl;
	}
	else{
		cout << "Key not found\n";
	}

	return 0;
}
















