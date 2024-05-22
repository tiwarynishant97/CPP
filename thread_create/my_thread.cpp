#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std;

void foo(int X){
    for(int i=0;i<X;i++){
        cout<<"Inside the Foo function"<<endl;
	sleep(1);
    }
}

int filewrite(){
FILE *pFile;
int a=10;
while (a){
	pFile=fopen("myfile.txt", "a+");
	if(pFile==NULL) {
    		cout << "Error opening file\n";
	}
	else {
		printf("writing to file \n");
		const char *text = "Write this to the file";
		fprintf(pFile, "Some text %d : %s\n",a,text);
		fclose(pFile);
		printf("writing done to file \n");
    	}
	a--;
	usleep(500000);
}
return 0;
}
/*
class thread_obj {
public:
    void operator()(int x)
    {
        for (int i = 0; i < x; i++)
            cout << "Thread using function"
                  " object as  callable\n";
    }
};
*/
int main(){
    thread th3(filewrite);
    thread th1(foo,10);
    //thread th2(thread_obj(), 3);
    
    th1.join();
    //th2.join();
    //th3.join();
    return 0;
}
