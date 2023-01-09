#include <iostream>
using namespace std;
int main(){
    int a=1;
    int b=2;
    if  ( a-- > 0 && ++b > 2 )
    {
        cout<<"stagee1-inside if"<<endl;
    }
    cout<<a<<" " << b<<endl;
    return 0;
}