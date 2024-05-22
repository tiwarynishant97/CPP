#include <iostream>

using namespace std;
template <typename T> T myMax(T x, T y)
       {
               return (x > y) ? x : y;
       }


int main(){
	
	//Def
	//to pass the data type as a parameter so that we don’t need to write the same code for different data types
        //two new keywords to support templates: ‘template’ and ‘typename’.
	//second keyword can always be replaced by the keyword ‘class’.
	//
	//expanded at compiler time - compiler does type-checking before template expansion
	//source code contains only function/class, but compiled code may contain multiple copies of the same function/class

	//Function Templates
	//We write a generic function that can be used for different data types. Examples of function templates are sort(), max(), min(), printArray().	

	cout << myMax<int>(3, 7) << endl;
    	// call myMax for double
    	cout << myMax<double>(3.0, 7.0) << endl;
    	// call myMax for char
    	cout << myMax<char>('g', 'e') << endl;

	return 0;
}




