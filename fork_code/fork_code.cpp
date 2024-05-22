#include <stdio.h>
#include <cstring>
#include <iostream>
#include <unistd.h>
using namespace std;

int main()

{
    printf("Hello World \n");
    int ret;
    ret = fork();
    if (ret==0){
	    printf("print from inside\n");
	    for (int i=0;i<10;i++){
		    printf("for loop");
		    sleep(0.5);
	    }
    }
    else if (ret>0){
	    printf("main start\n");
    }	    
    else {
		    printf("ERROR");
    }
    return 0;
}

