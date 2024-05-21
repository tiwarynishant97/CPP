#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows :";
    cin>>n;
    int i=1;
    
    while (i<=n){
        int j=1;
        int space = i-1;
        int star=n-i+1;
        while(space){
            cout<< " ";
            space--;
        }
        while (j<=star){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
