#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s  = "AAAABBCCCCDDD";
    char s1[10];
    char tmp = s[0];
    int var = 0;
    
    
    int size = s.size();
    cout <<s<<" size "<<size;
    
    for (int i =1;i<=size;i++){
        if (s[i]==tmp){
            //cout <<"same";
        }
        else {
            //cout <<"else case";
            s1[var]=tmp;
            var++;
        }
        
        tmp = s[i];
    }
    
    cout <<endl<<"new string " <<s1;

    return 0;
}
