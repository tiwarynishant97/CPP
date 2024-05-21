#include <iostream>
#include <list>
//it uses doubly linked list
using namespace std;

int list_stl() {
	cout << "Hello from list" << endl;
	list<int>l;

	l.push_back(1);
	l.push_front(2);

	for (int i : l) {
		cout << i << " ";
	}

	l.erase(l.begin());

	cout << "after erase " << endl;
	for (int i : l) {
		cout << i << " ";
	}
	cout << "size of lits " << l.size()<<endl;

	//initalize 5 elements with val 100

	list<int> n(5, 100);

	for (int i : n) {
		cout << i << " ";
	}

	return 0;
}