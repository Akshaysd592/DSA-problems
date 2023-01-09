#include <iostream>
using namespace std;
int main(){

 char ch;
 cout<<"Enter the value to be checked"<<endl;
 cin>>ch;
 if(ch>=97 && ch<=122){
    cout<<"It is a lower case character value"<<endl;
 }
 else if (ch>=65 && ch<=90) {
    cout<<"It is a upper case character value"<<endl;

 }
 else if (ch>=48 && ch<=57){
    cout<<"It is a numeric value"<<endl;
 }
 else{
    cout<<"Enter other value to be checked:"<<endl;
 }

    return 0;
}