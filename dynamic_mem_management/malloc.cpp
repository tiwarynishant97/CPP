#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main(){
	//dynamically allocate a single large block of memory with the specified size. 
	//It returns a pointer of type void which can be cast into a pointer of any form. 
	//It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 
        

	//Syntax
	//ptr = (cast-type*) malloc(byte-size)
	//
	//example
	//ptr = (int*) malloc(100 * sizeof(int));
        //size of int is 4 bytes, this statement will allocate 400 bytes of memory. 
	//And, the pointer ptr holds the address of the first byte in the allocated memory
	//If space is insufficient, allocation fails and returns a NULL pointer
	cout << "Hello Nishant"<<endl;
	cout << "Enter array size"<<endl;
	int n=0;
	cin>>n;

	if (n){
		int *ptr = (int*) malloc(n * sizeof(int));
		if (ptr == NULL) {
			printf("Memory not allocated.\n");
                        exit(0);
                }
                else {

        		// Memory has been successfully allocated
        		printf("Memory successfully allocated using malloc.\n");
			for (int i = 0; i < n; ++i) {
         			ptr[i] = i + 1;
        		}

        		// Print the elements of the array
        		printf("The elements of the array are: ");
        		for (int i = 0; i < n; ++i) {
        	    		printf("%d, ", ptr[i]);
        		}
		 }
	}
	
		 
	return 0;
}




