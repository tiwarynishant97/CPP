#include <iostream>
#include <map>

using namespace std;


int map_stl() {

	cout << "Hello from MAP" << endl;
	//stored in key value pair
	//unique key should be there

	map<int,string> m;
	m[1] = "nishant";
	m[2] = "sushant";
	m[12] = "prashant";

	m.insert({ 5, "Jack" });

	for (auto i:m) {

		cout << i.first << ":"<<i.second<<" ";
	}cout << endl;


	cout << "before erase Finding 12 " << m.count(12) << endl;;

	m.erase(12);
	cout << "after erase Finding 12 " << m.count(12)<<endl;

	auto it = m.find(5);
	for (auto i = it; i != m.end(); i++) {
		cout << (*i).first << " ";
	}cout << endl;

	return 0;
}