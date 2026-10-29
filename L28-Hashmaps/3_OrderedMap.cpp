#include <iostream>
#include <map>
using namespace std;

int main(){

	map<string, int> h; // T.C: O(logN) -> Internally it uses AVL Tree(Self balancing tree)
	// data is sorted according to key

	// It only accepts pair inside for insertion
	// Way 1
	pair<string, int> p; // pair is inbuilt 
	p.first = "Mango";
	p.second = 100; 
	h.insert(p);
	// Way 2
	h.insert(make_pair("Guava", 50));  // make_pair is inbuilt function to do the insertion

	// Way 3
	h.insert({"Apple", 150});
	h.insert({"Pineapple", 150});
	h.insert({"Kiwi", 150});

	// Way 4
	h["Orange"] = 100;

	// Print karna
	// every each pair p(variable name) that belongs to hashmap h
	for(auto p: h){
		cout << p.first << ", "<<p.second << endl;
	}

	// Search 
	string key = "Mango";

	if(h.count(key) == 1){
		cout << key << " is present\n";
	}
	else{
		cout << key << " is not present\n";
	}

	if(h[key]){
		cout << key << " is present\n";
	}
	else{
		cout << key << " is not present\n";
	}


	return 0;
}
















