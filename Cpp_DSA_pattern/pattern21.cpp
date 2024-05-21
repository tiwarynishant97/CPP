#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows :";
    cin>>n;
    int i=1;
    
    while (i<=n){
        int j=1;
        int space = n-i;
        while(space){
            cout<< " ";
            space--;
        }
        while (j<=i){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
