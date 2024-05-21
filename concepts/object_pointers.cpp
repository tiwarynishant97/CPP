#include <iostream>
#include <string>
#include <thread>
#include <windows.h> //instead of unistd.h for windows
using namespace std;


class Student {
    int roll;
    string name;
    public :
        int b ;
        void setroll(int a){
            roll=a;
            b=a;
        }
        void setname(string s){
            name=s;
        }
        void getroll(){
            cout << "Roll no is "<<roll<<endl;
        }
};

int main(){

    Student s;
    s.setroll(1);
    s.setname("nishant");
    s.getroll();
    cout<<"A val is "<<s.b<<endl;

    //object pointers
    Student *s1;
    Student swlaa;
    s1 = &swlaa;
    s1->setroll(2);
    s1->setname("nishantra");
    s1->getroll();
    cout<<"A val is "<<s1->b<<endl;
    
    return 0;
}