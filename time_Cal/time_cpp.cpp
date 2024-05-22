#include <iostream>
#include <ctime>
#include <unistd.h>
#include <string.h>
using namespace std;
int main()
{
    // declaring argument of time()
    time_t my_time = time(NULL);
  
    // ctime() used to give the present time
    printf("%s", ctime(&my_time));


    string key = "NISH";
    printf("print1\n");
    sleep(1);
    char *val = getenv( key.c_str() );
    printf("print2\n");
    if(val!=NULL){
    printf("%s ",val);

    if(!strcmp(val,"YES")){
	    printf("prop is yes");
    }
    else if(!strcmp(val,"NO")){
	    printf("prop is no");
    }
    else {
	    printf("nothing set");
    }
    }
    sleep(2);
    //my_time = time(NULL);
    //printf("%s", ctime(&my_time));
    return 0;
}
