#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows :";
    cin>>n;
    int i=1;

    while (i<=n){

        int j=1;
        char ch = i+'A'-1;
        while (j<=i){
            cout<<ch++;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
