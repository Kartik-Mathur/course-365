#include <iostream>
using namespace std;

// blueprint
class Car{
public:
	char name[100];
	int price;
	int model;

	// Functions 
	void print(){
		cout << "Name  : "<<name << endl;
		cout << "Price : "<<price << endl;
		cout << "Model : "<<model << endl << endl;
	}
};

int main(){
	Car A; // Object of class Car
	strcpy(A.name, "Maruti");
	A.price = 100;
	A.model = 2020;

	// cout << "Name  : "<<A.name << endl;
	// cout << "Price : "<<A.price << endl;
	// cout << "Model : "<<A.model << endl;


	Car B;
	strcpy(B.name, "Audi");
	B.price = 200;
	B.model = 2022;


	// cout << "Name  : "<<B.name << endl;
	// cout << "Price : "<<B.price << endl;
	// cout << "Model : "<<B.model << endl;

	A.print();
	B.print();



	return 0;
}
















