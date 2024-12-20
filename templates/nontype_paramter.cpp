#include <iostream>

using namespace std;
//We can pass non-type arguments to templates.
//used for specifying max or min values or any other constant value for a particular instance of a template
//
//non-type parameters must be const ,compiler must know the value of non-type parameters at compile time

template <class T, int max> int arrMin(T arr[], int n)
{
    int m = max;
    for (int i = 0; i < n; i++)
        if (arr[i] < m)
            m = arr[i];
 
    return m;
}


int main(){

    int arr1[] = { 10, 20, 15, 12 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
 
    char arr2[] = { 1, 2, 3 };
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
 
    // Second template parameter
    // to arrMin must be a
    // constant
    cout << arrMin<int, 10000>(arr1, n1) << endl;
    cout << arrMin<char, 256>(arr2, n2)<<endl;

	return 0;
}




