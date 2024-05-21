#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows :";
    cin>>n;
    int i=1;
    
    while (i<=n){
        int j1=n-i+1;
        int j2=(2*i)-2;
        int l1=1,l2=1,l3=1;
        while (l1<=j1){
            cout<<l1;
            l1++;
        }
        while (l2<=j2){
            cout<<"*";
            l2++;
        }
        while (l3<=j1){
            
            cout<<n-i+1;
            l3++;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
