/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int nSum(int n) 
{ 
    cout << "START REC FUNC"<<endl;
    cout <<"N val is "<<n <<endl;
    // base condition to terminate the recursion when N = 0 
    if (n == 0) {
	cout <<"Return zero"<<endl; 
        return 0; 
    }

     cout << "middle of recursive"<<endl; 
    // recursive case / recursive call 
    int res = n + nSum(n - 1);
    cout << "END REC FUNC"<<endl; 
  
    return res; 
} 



int main(){

/*
	int a = 10;
	int *ptr = &a;
	int **ptr2 = &ptr;
	**ptr2 = 30;

	cout << "a val is "<<a <<" pointer address is "<<ptr <<" val stored in ptr is "<<*ptr<<endl;
	cout <<" pointer2 address is "<<ptr2 <<" ptr2 val stored in ptr is "<<*ptr2<< " value is " <<**ptr2<<endl;
*/
	int n = 5;

	cout << "Call Rec function call"<<endl;
    	// calling the function
    	int sum = nSum(n);

    	cout << "Sum = " << sum;
        return 0;
}