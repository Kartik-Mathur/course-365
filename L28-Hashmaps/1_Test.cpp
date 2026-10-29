#include <iostream>
using namespace std;

class node{
public:
	string key;
	int value;
	node* next;

	node(string k, int v){
		key = k;
		value = v;
		next = NULL;
	}
};

class hashmap{
	int hash_function(string &key){
		int ans = 0;
		int mul = 1;
		for (int i = 0; i < key.size(); ++i)
		{
			ans += key[i]%ts * mul%ts;
			mul *= 17;
			mul %= ts;
		}
		return (ans)%ts;
	}

	void rehashing(){
		node** olda = a;
		int oldts = ts;

		a = new node*[2*ts];
		for (int i = 0; i < 2*ts; ++i)
		{
			a[i] = NULL;
		}
		cs = 0;
		ts *= 2;

		for (int i = 0; i < oldts; ++i)
		{
			node* head = olda[i];
			while(head != NULL){
				insert(head->key, head->value);
				node* t = head;
				head = head->next;

				delete t;
			}
		}

		delete []olda;
	}
public:
	node** a;
	int ts;
	int cs; // To find load_factor

	hashmap(int N = 5){
		a = new node*[N];
		ts = N;
		cs = 0;

		for (int i = 0; i < ts; ++i)
		{
			a[i] = NULL;
		}
	}

	void insert(string key, int value){
		int hashIndex = hash_function(key);

		node* n = new node(key, value);
		n -> next = a[hashIndex];
		a[hashIndex] = n;
		cs++;

		float load_factor = cs/(ts*1.0);
		if(load_factor > 0.6){
			rehashing(); // Table ka size double kardo and saari nodes usmei
			// dobara insert kardo...
		}
	}

	void print(){
		for (int i = 0; i < ts; ++i)
		{
			node* head = a[i];
			cout << i << " : ";
			while(head != NULL){
				cout << "("<<head -> key <<", "<<head->value<<") ";
				head = head->next;
			}

			cout << endl;
		}
	}

	node* search(string key){
		int hashIndex = hash_function(key);

		node* head = a[hashIndex];
		while(head != NULL){
			if(head -> key == key){
				return head;
			}
			head = head->next;
		}

		return NULL;
	}

	// return kardo value bucket ko by reference, agar neeche value update kari toh ho jaegi..
	int& operator[](string key){
		// We need to check key hai kya? 
		node* x = search(key); 
		// 1. if not present then insert karna padega...
		if(x == NULL){
			int temp;
			insert(key, temp); // insert kar diya, ab toh milega na
			x = search(key); // now I will find the key this time....
		}
		// 2. if present then update karna padega...

		return x->value;
	}
};

int main(){


	hashmap h;
	h.insert("Mango", 100);
	h["Mango"] = 5555;
	h.insert("Apple", 150);
	h.insert("Kiwi", 80);
	h["Guava"] = 90;
	// h.insert("Guava", 90);
	// h.insert("Banana", 90);
	// h.insert("Pineapple", 90);
	// h.insert("Orange", 90);
	// h.insert("Dragon Fruit", 90);
	// h.insert("Peach", 90);
	// h.insert("Grapes", 120);
	// h.insert("Watermelon", 70);
	// h.insert("Papaya", 85);

	// Operator overloading ho rahi hai
	h["Strawberry"] = 100; // insertion
	h["Strawberry"] = 120; // updation
	cout << h["Strawberry"] << endl; // read -> 120 is the output

	// h.insert("Strawberry", 110);
	// h.insert("Pomegranate", 130);
	// h.insert("Pear", 95);
	// h.insert("Cherry", 140);
	// h.insert("Lemon", 60);
	// h.insert("Coconut", 100);
	// h.insert("Plum", 75);
	// h.insert("Lychee", 115);
	
	h.print();


	return 0;
}
















