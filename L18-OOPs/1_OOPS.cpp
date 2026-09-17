#include <iostream>
using namespace std;

// blueprint
class Car{
private:
	int price;

public:
	char name[100];
	int model;

	// Functions 
	void print(){
		cout << "Name  : "<< name << endl;
		cout << "Price : "<< price << endl;
		cout << "Model : "<< model << endl << endl;
	}

	// 1. Default Constructor -> it will help to create an object
	Car(){
		cout << "Inside Default Constructor\n";
	}

	// 2. Parameterized Constructor
	Car(char *n,int p,int m){
		cout << "Inside Parameterized Constructor\n";
		strcpy(name, n);
		price = p;
		model = m;
	}

	// 3. Parameterized Constructor
	Car(int p, char* n,int m){
		cout << "Inside Parameterized Constructor - 2\n";
		strcpy(name, n);
		price = p;
		model = m;
	}

	// 4. Copy Constructor
	Car(Car &X){
		cout << "Inside Copy Constructor\n";
		strcpy(name, X.name);
		model = X.model;
		price = X.price;
	}

	// 5. Copy Assignment Operator (=)
	void operator = (Car X){
		cout << "Inside Copy Assignment Operator\n";
		strcpy(name, X.name);
		model = X.model;
		price = X.price;
	}

	// 6. Destructor
	// ~ -> Tilde 
	~Car(){
		cout << "Deleting Car: "<<name<<endl;
	}

	// Getter and Setter for private data members
	void setPrice(int p){
		if(p > 150 and p < 200){
			price = p;
		}
		else{
			price = 180;
		}
	}

	int getPrice(){
		return price;
	}
};

int main(){
	Car A; // Object of class Car
	strcpy(A.name, "Maruti");
	// A.price = 100;
	A.setPrice(170);
	A.model = 2020;
	// cout << "Name  : "<<A.name << endl;
	cout << "Price : "<< A.getPrice() << endl;
	// cout << "Model : "<<A.model << endl;
	Car B;
	strcpy(B.name, "Audi");
	// B.price = 200;
	B.setPrice(200);
	B.model = 2022;

	char name[] = "BMW";
	Car C(name, 300, 2025);
	Car D(300,"ASDASD", 2025);
	// cout << "Name  : "<<B.name << endl;
	// cout << "Price : "<<B.price << endl;
	// cout << "Model : "<<B.model << endl;
	// Car E = A;
	Car E(B);

	C = B; // Copy Assignment Operator function calling

	A.print();
	B.print();
	C.print();
	D.print();
	E.print();



	return 0;
}
















