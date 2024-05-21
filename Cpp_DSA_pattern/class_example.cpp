#include <iostream>
#include <string>
using namespace std;

class Student {
    int roll;
    string name;
    public :
        int b ;
        void setroll(int roll){
            this->roll = roll; //this pointer
            b=roll;
        }
        void setname(string s){
            name=s;
        }
        void getroll(){
            cout << "Roll no is "<<roll<<endl;
        }
        void getbval(){
            cout<<"B val is "<<b <<endl;
        }
};

class Achiver : public Student{
    int score;

public :
    void setscore(int i){
        score=i;
    }
    void getscore(){
        cout<<" Score is "<<score<<endl;
    }
} ;

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


    //pointer to class member
    int Student::*ptr=&Student::b;
    s.*ptr= 10;
    s.getbval();

    

    return 0;
}