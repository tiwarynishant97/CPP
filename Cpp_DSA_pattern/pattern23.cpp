#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows :";
    cin>>n;
    int i=1;
    while (i<=n){
        int space=n-i;
        int count=1;
        int j=1;
        int j2=1;
        while(space){
            cout<<" " ;
            space--;
        }
        while (j<=i){
            cout << count++;
            j++;
        }
        count=count-2;
        while (j2<=(i-1)){

            cout << count--;
            j2++;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
