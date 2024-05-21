#include <iostream>
#include <vector>

using namespace std;

int vector_stl() {

	vector<int> v;
	vector<int> a(5, 1);
	cout << "Vectore Size is " << v.capacity() << endl;
	v.push_back(2);
	cout << "Vectore Size is " << v.capacity() << endl;

	v.push_back(5);
	cout << "Vectore Size is " << v.capacity() << endl;

	v.push_back(10);

	cout << "Element at second index is " << v.at(2)<<endl;

	cout << "Front element is " << v.front() << endl;
	cout << "Back element is " << v.back() << endl;

	for (int i : v) {
		cout << i << " ";
	}cout << endl;

	v.pop_back();

	cout << "after pop " << endl;
	for (int i : v) {
		cout << i << " ";
	}cout << endl;


	cout << "Before clear size " << v.size() << endl;
	v.clear();
	cout << "After clear size " << v.size() << endl;
	cout << "For a vector " << endl;
	for (int i : a) {
		cout << i << " ";
	}cout << endl;

	return 0;
}