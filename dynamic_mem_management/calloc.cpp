#include <iostream>

using namespace std;


int main(){
	//contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type
	//similar to malloc() but has two different points and these are:
	//1.It initializes each block with a default value ‘0’.
	//2.It has two parameters or arguments as compare to malloc().

	//syntax
	//ptr = (cast-type*)calloc(n, element-size);
	//here, n is the no. of elements and element-size is the size of each element.

        //example
	//ptr = (float*) calloc(25, sizeof(float));
	//
		
	cout << "Hello Nishant";

	cout << "Enter array size"<<endl;
        int n=0;
        cin>>n;

        if (n){
                int *ptr = (int*) calloc(n,sizeof(int));
                if (ptr == NULL) {
                        printf("Memory not allocated.\n");
                        exit(0);
                }
                else {

                        // Memory has been successfully allocated
                        printf("Memory successfully allocated using malloc.\n");
                        for (int i = 0; i < n-1; ++i) {
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




