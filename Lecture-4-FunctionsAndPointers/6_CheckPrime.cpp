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

int main(){
    int n;
    cin>>n;

    bool ans = prime(n);

    if(ans == true){
    	cout << "prime\n";
    }
    else{
    	cout << "not prime\n";
    }

    return 0;
}