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
};

int main(){


	hashmap h;
	h.insert("Mango", 100);
	h.insert("Apple", 150);
	h.insert("Kiwi", 80);
	h.insert("Guava", 90);
	h.insert("Banana", 90);
	h.insert("Pineapple", 90);
	h.insert("Orange", 90);
	h.insert("Dragon Fruit", 90);
	h.insert("Peach", 90);
	h.insert("Grapes", 120);
	h.insert("Watermelon", 70);
	h.insert("Papaya", 85);
	h.insert("Strawberry", 110);
	h.insert("Pomegranate", 130);
	h.insert("Pear", 95);
	h.insert("Cherry", 140);
	h.insert("Lemon", 60);
	h.insert("Coconut", 100);
	h.insert("Plum", 75);
	h.insert("Lychee", 115);
	
	h.print();


	return 0;
}
















