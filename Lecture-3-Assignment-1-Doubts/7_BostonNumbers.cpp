#include <iostream>
using namespace std;

int main(){

	int no;
	cin>>no;
	int copy_no = no;
	// "This will find the digitSum of a given no"

	int digitSum = 0;
	while(no > 0){
		int ld = no % 10;

		digitSum += ld;

		no /= 10;
	}

	// Prime factors and unke bhi digits ka sum chahiye....
	// 378  = 2*3*3*3*7 -> 2 + 3 + 3 + 7
	// 442  = 2*13*17   -> 2 + (1+3) + (1+7)

	int x = 2;
	int prime_factors_DigitSum = 0;
	no = copy_no; // wapis se number ko reset kar diya original value par
	while (x<=no){

		while(no%x == 0){
			// x ke digits ke sum ko nikalna hai

			int temp = x; // because I cannot change the value of x

			while(temp > 0){
				int ld = temp % 10;

				prime_factors_DigitSum += ld;

				temp /= 10;
			}

			no /= x;

		}

		x++;
	}

	if(digitSum == prime_factors_DigitSum){
		cout << 1 << endl;
	}
	else{
		cout << 0 << endl;
	}


	return 0;
}
















