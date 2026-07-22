#include <iostream>
using namespace std;
  
bool prime(int n){

	for(int i = 2 ; i < n ; i++){
		if(n%i == 0){
			return false;
		}
	}

	return true;
}

void printPrimes(int n){
	for (int i = 2; i <= n; ++i)
	{
		if(prime(i) == true){
			cout << i << " ";
		}
	}
}

int main(){
    int n;
    cin>>n;

    printPrimes(n);
   

    return 0;
}