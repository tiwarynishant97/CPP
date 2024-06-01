#include <iostream>

//Firiend function can be global as well

using namespace std ;

class Base;//foreward declaration for friend fn to use
class Base2 {
    int a2;
public:
    int geta2(){
        return a2;
    }
    int seta2(int v){
        a2=v;
    }
    int displaybase(Base& t);
    //{return t.a;}//nned to define out before main 

};

class Base {

    int a;

    public:
    int geta(){
        return a;
    }
    int seta(int v){
        a=v;
    }

    //friend class Base2;
    friend int Base2::displaybase(Base& t);
};


int Base2::displaybase(Base& t){
    return t.a;
}

int main(){


    cout <<"Helllo from cpp"<<endl;

    Base a;
    a.seta(2);
    cout <<" Base a val is "<<a.geta()<<endl;

    Base2 b2;

    b2.seta2(5);
    cout <<" Base2 a2 val is "<<b2.geta2()<<endl;


    cout <<" Display base frined a val "<<b2.displaybase(a)<<endl;


    return 0;
}