/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int fac(int n){
    if (n==0) return 1;
    return n*fac(n-1);
}

int main()
{
    cout<<"Hello World"<<endl;
    
    cout<<fac(5);

    return 0;
}