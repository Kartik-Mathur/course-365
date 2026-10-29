#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

	unordered_map<string, int> h; // O(1) in average case

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
	// for(auto p: h){
	// 	cout << p.first << ", "<<p.second << endl;
	// }

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

	// Printing the entire hashtable
	for(int i = 0 ; i < h.bucket_count(); i++){
		cout << i << " : ";
		for(auto it = h.begin(i); it != h.end(i) ; it++){
			cout << "(" << it->first <<", "<<it->second << ") ";
		}

		cout << endl;
	}

	return 0;
}
















