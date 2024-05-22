#include <iostream>

using namespace std;


int main(){

	//re-allocation” method in C to dynamically change the memory allocation of a previously allocated memory. 
	//if the memory previously allocated with the help of malloc or calloc is insufficient, realloc can be used to dynamically re-allocate memory.
	//re-allocation of memory maintains the already present value and new blocks will be initialized with the default garbage value.

	//syntax
	//ptr = realloc(ptr, newSize);
        //where ptr is reallocated with new size 'newSize'.
	
	//If space is insufficient, allocation fails and returns a NULL pointer.
	
	//MALLOC
	//
	 cout <<endl<< "Enter array size"<<endl;
        int n=0;
        cin>>n;
	int *ptr;
        if (n){
                ptr = (int*) malloc(n * sizeof(int));
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
	cout <<endl<< "Enter new array size"<<endl;
	cin>>n;
	        int *ptr2 = (int*)realloc(ptr,n*(sizeof(int)));
                if (ptr2 == NULL) {
                        printf("Memory not allocated.\n");
                        exit(0);
                }
                else {

                        // Memory has been successfully allocated
                        printf("Memory successfully extended  using realloc.\n");
                        for (int i = 0; i < n; ++i) {
                                ptr[i] = i + 2;
                        }

                        // Print the elements of the array
                        printf("The elements of the array are: ");
                        for (int i = 0; i < n; ++i) {
                                printf("%d, ", ptr[i]);
                        }
                 }


	return 0;
}




