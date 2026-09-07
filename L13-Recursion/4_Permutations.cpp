#include <iostream>
using namespace std;

void permutations(char *a,int i){
	// base case
	if(a[i] == '\0'){
		cout << a << endl;
		return;
	}

	// recursive case
	for (int j = i; a[j] != '\0' ; ++j)
	{
		swap(a[i], a[j]); // recursion ki call se pehle swap kia.....
		permutations(a, i+1);
		swap(a[i], a[j]); // vapis jaate time undo kar dena is backtracking.....
	}
}

int main(){

	char a[] = "abc";

	permutations(a, 0);

	return 0;
}
















