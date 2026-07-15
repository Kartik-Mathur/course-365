#include <iostream>
using namespace std;

int main(){

	int x=0,y=0;

	char ch;
	ch = cin.get();

	while(ch != '\n'){

		if(ch == 'N') y++;
		else if(ch == 'S') y--;
		else if(ch == 'W') x--;
		else x++; // ch == 'E'

		ch = cin.get();
	}

	// 1. Check 'E'
	if(x>=0){
		// if x>=0 then yeh loop chlega
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}
	}

	// 2. Check 'N'
	char t;
	if(y>=0){
		t = 'N';
	}
	else{// 3. Check 'S'
		y = -y; // Make y positive to write a loop |y|
		t = 'S';
	}

	for (int i = 0; i < y; ++i)
	{
		cout << t;
	}

	// 4. Check 'W'
	if(x<=0){
		x = -x; // |x| kardo
		for (int i = 0; i < x; ++i)
		{
			cout << 'W';
		}
	}

	return 0;
}
















