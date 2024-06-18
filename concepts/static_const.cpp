#include <iostream>

//Firiend function can be global as well

/*Static variables are for the class (not per object). i.e memory is allocated only once per class and every instance uses it. So if one object modifies its value then the modified value is visible to other objects as well. ( A simple thought.. To know the number of objects created for a class we can put a static variable and do ++ in constructor)
Value persists between different function calls
*/
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
