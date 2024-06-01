#include <iostream>

//Firiend function can be global as well

using namespace std ;
const int a =10;
static int b =10;

int main(){
    //a=15;
    b=15;
    
    cout << " A is "<<a<<endl;
    cout << " B is "<<b<<endl;

    return 0;
}
