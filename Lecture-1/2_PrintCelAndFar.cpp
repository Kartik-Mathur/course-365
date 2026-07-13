#include <iostream>
using namespace std;

int main(){

	int init, fval, step;
	cin>>init>>fval>>step;

	for(int far = init ; far <= fval ; far = far + step){
		float cel = (5/9.0)*(far - 32);

		cout << far << "  "<<cel << endl;
	}



	return 0;
}
















