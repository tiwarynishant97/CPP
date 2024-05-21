#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter the character ";
    cin>>ch;
    cout << "The character is : " << ch << endl;

    int a = ch;
    cout << "ASCII value is :"<<a<<endl;

    if ( 64 < a && a <91){
        cout<< "It is Upper case character";
    }
    if ( 96< a && a <123){
        cout<< "It is Lower case character";
    }
    if ( 47< a && a <58){
        cout<< "It is Number";
    }

    return 0;
}