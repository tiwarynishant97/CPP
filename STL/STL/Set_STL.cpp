#include <iostream>
#include <set>
using namespace std;


int set_stl() {

	cout << "Hello from set stl" << endl;

	//only unique elements in set
	//BST is used in background for this
	//element comes in sorted order
	//set is slow than unordered set

	set<int> s;

	s.insert(5);
	s.insert(5);
	s.insert(2);
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(6);

	for (int i : s) {
		cout << i << " ";
	}cout << endl;

	s.erase(s.begin());
	for (int i : s) {
		cout << i << " ";
	}cout << endl;

	set<int>::iterator it = s.begin();
	it++;
	s.erase(it);
	for (int i : s) {
		cout << i << " ";
	}cout << endl;

	cout << "check if no is presetn " << s.count(5)<<endl;

	set<int>::iterator itr = s.find(5);

	cout << "value presetn at iterator is " << *itr << endl;

	for (auto i = itr; i != s.end(); i++) {
		cout << *i<< " ";
	}cout << endl;

	return 0;
}