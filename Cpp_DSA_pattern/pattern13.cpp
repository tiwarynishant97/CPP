#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows :";
    cin>>n;
    int i=1;

    while (i<=n){
        int j=1;
        //char ch= 'A';
        while (j<=n){
            char ch= 'A'+i+j-2;
            cout<<ch;
            j=j+1;
            ch =ch+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
