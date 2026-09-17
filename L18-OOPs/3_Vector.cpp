#include <iostream>
using namespace std;

class Vector{
	int* a;
	int n;
	int cs;
public:

	Vector(int s = 4){
		n = s;
		a = new int[s];
		cs = 0; // If this becomes equals to n we need to double the vector 
	}

	void push_back(int d){
		if(cs == n){
			int *olda = a;
			n = 2*n;
			a = new int[n];


			for (int i = 0; i < cs; ++i)
			{
				a[i] = olda[i];
			}

			delete []olda;
		}

		a[cs++] = d;
	}

	void pop_back(){
		cs--;
	}

	int size(){
		return cs;
	}

	int capacity(){
		return n;
	}

	int operator[](int i){
		return a[i];
	}
};

int main(){	

	Vector v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	cout << "capacity : "<<v.capacity()<<endl;
	cout << "size     : "<<v.size()<<endl;


	return 0;
}
















