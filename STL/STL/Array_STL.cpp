#include <array>
#include <iostream>
using namespace std;
int stlarray() {
	array<int,4> arr = { 6,7,8,9 };
	int size = arr.size();

	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}

	cout << endl;

	cout << "Value at 2nd pos " << arr.at(2)<<endl;
	cout << "Value at Front pos " << arr.front()<<endl;
	cout << "Value at Back pos " << arr.back() << endl;


	return 0;
}