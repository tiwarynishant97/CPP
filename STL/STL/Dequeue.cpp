#include <deque>
#include <iostream>

using namespace std;

int dequeue() {

	deque<int> d;

	d.push_back(1);
	d.push_back(5);
	d.push_back(7);

	cout << endl;
	cout << "Print first index Element " << d.at(1) << endl;
	cout << "back " << d.back() << endl;

	cout << "Is empty " << d.empty() << endl;

	cout << "Size before erase " << d.size() << endl;
	d.erase(d.begin(), d.begin() + 1);
	cout<<"After erase "<<d.size()<<endl;

	for (int i : d) {
		cout << i << endl;
	}






	return 0;
}