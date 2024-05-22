#include <iostream>

using namespace std;

//Note
  //Class templates like function templates, class templates are useful when a class defines something that is independent of the data type.
  //Can be useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc.


//Eg1
template <typename T> class Array {
private:
    T* ptr;
    int size;
 
public:
    Array(T arr[], int s);
    void print();
};
 
template <typename T> Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
}
 
template <typename T> void Array<T>::print()
{
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
}
//////////////////////////////////////////////////////////////
//Eg2
//Q- Any diff bw class and template keyword
template <class T, class U> class A {
    T x;
    U y;
 
public:
    A() { cout << "Constructor Called" << endl; }
};
int main(){

	int arr[5] = { 1, 2, 3, 4, 5 };
        Array<int> a(arr, 5);
    	a.print();	
	cout << "Hello Nishant"<<endl;
	//Eg2
	A<char, char> c;
    	A<int, double> d;

	return 0;
}




