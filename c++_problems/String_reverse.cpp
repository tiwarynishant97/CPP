
#include <iostream>
#include <string>

using namespace std;


int main() {

	cout << "Hello from string code" << endl;

	string s = "I am Ram";

	int s_s = s.size()-1;
	string s2;
	int insertpt = 0;
	cout << "string is " << s<<endl;
	for (int i = s_s; i >= 0; i--) {
		char tmp = s[i];
		char tmp2 =' ';
		if (tmp != tmp2) {
			cout << "tmp is "<<tmp<<endl;
			s2.insert(insertpt,1, tmp);
		}
		else {
			insertpt = s2.size();
			s2.insert(insertpt, 1, tmp2);
			insertpt = s2.size();
		}
		cout << "inserpt is " << insertpt<<endl;
	}

	cout << "new string is " << s2<<endl;

	return 0;
}
