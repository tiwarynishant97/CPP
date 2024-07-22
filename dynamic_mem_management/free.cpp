#include <iostream>

using namespace std;


int main(){

	//“free” method in C is used to dynamically de-allocate the memory. 
	//The memory allocated using functions malloc() and calloc() is not de-allocated on their own
	//TO avoid memory wastage
	
	//synatx
	//free(ptr);
	cout<<"Enter sise of array"<<endl;
	int n =0;
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
			//If ptr does not point to a memory block allocated by calloc, malloc or realloc functions, it causes undefined behavior.
			free(ptr);
			printf("\nMalloc Memory successfully freed.\n");
                 }
        }

	cout << "Hello Nishant";
	return 0;
}




