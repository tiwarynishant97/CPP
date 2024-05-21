#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int algo_stl() {
	cout << "Helllo from STL ALGO" << endl;

	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(6);
	v.push_back(7);

	cout << "FInd six " << binary_search(v.begin(), v.end(), 6)<< endl;
	cout << "Lower bound for element 6 at pos:" << lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;
	cout << "Upper bound for element 3 at pos:" << upper_bound(v.begin(), v.end(), 2)-v.begin() << endl;

	int a = 5;
	int b = 10;

	cout << "max : " << max(a, b)<<endl;
	cout << "min : " << min(a, b)<<endl;
	swap(a, b);
	cout << "a val is " << a << "b val is " << b << endl;

	string abcd = "abcd";
	reverse(abcd.begin(), abcd.end());
	cout << "String " << abcd << endl;

	rotate(v.begin(), v.begin() + 1, v.end());
	for (int i : v) {
		cout << i << " ";
	}cout << endl;

	//sort
	//Based on inro sort = quick+heap+inseration sort

	sort(v.begin(), v.end());
	for (int i : v) {
		cout << i << " ";
	}cout << endl;







	return 0;
}