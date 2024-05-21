/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>


using namespace std;

int main()
{
    int r = 4;
    int c = 7;
    int mid = (c/2)+1;
    
    for (int i = 0 ; i<r;i++){
        int n1=0;
        int n2=i;
        for (int j = 1 ; j<=c ; j++){
            
            if ( i ==0 || j ==1 || j==c){
                cout <<r;
            }
            else if (j<=mid){
                if (n1<i){
                    n1++;
                }
                cout<<r-n1;
            }
            else {
                if (n1==(r-1)){
                    n2--;
                    goto end_print;
                }
                if (j>(c-i)){
                    if (n2>1){
                    n2--;
                    }
                    goto end_print;
                }
                
                end_print:
                    cout << r-n2;
                
            }
        }
        cout<<endl;
    }

    return 0;
}