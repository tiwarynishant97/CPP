/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;
int binum[32];

int dtb(int num,int pos){
    
    //int binum[32];
    int i=0;
    while (num>0){
        binum[i]=num%2;
        num=num/2;
        i++;
    }
    
    return binum[pos];
}

int main()
{
    printf("Hello World");
    
    cout <<dtb(20,4)<<endl;
    
    for (int i=0;i<32;i++ ){
        
        cout<<binum[i];
    }

    return 0;
}
