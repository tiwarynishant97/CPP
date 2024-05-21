#include <iostream>
#include <stack>

using namespace std;


int stack_stl() {

	cout << "hello from stack" << endl;

	//LIFO
	stack<string> s;

	s.push("Nishant");
	s.push("Prashant");
	s.push("Sushant");

	cout << "Top element " << s.top() << endl;
	s.pop();
	cout << "Top element " << s.top() << endl;
	cout << "Size of stack" << s.size() << endl;
	cout << "Empty of not " << s.empty() << endl;





	return 0;
}