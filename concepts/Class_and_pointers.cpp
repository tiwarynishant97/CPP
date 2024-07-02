#include <iostream>
using namespace std;

class Base{
    int b;
    public:
    int getb(){
        return b;
    }
    void setb(int num){
        b =num;
    }
};
class Derived:public Base{
    int d;
    public:
    int getd(){
        return d;
    }
    void setd(int num){
        d =num;
    }
};

int main()
{
    Base b1;
    Base *bptr;
    Derived d1;
    Derived *dptr;
    
    //base ptr accessing derived object
    bptr = &d1;
    
    //derived ptr accessing base object
    //this is not possible
    //dptr = &b1;
    
    bptr->setb(2);
    cout <<bptr->getb()<<endl;
    
    //Not possible base pointer with derived object can access only base members
    bptr->setd(4);
    cout <<bptr->getd()<<endl;
    
 
    return 0;
}
